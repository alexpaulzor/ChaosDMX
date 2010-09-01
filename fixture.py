class Segment:
  """A range of values representing a common type of function"""
  def __init__(self, description, low_value, high_value = None, intensity = 127, enabled_channels = []):
    """high_value can be None, meaning this is a single-valued segment."""
    self.low_value = low_value
    self.high_value = high_value
    self.description = description
    self.enabled_channels = enabled_channels
    self.intensity = intensity

class Channel:
  def __init__(self, name, address, segments):
    self.name = name
    self.address = address
    self.segments = segments
    self.value = 0
  
  def set_value(self, value):
    # TODO: send DMX command
    print "%s (%d): %d => %d" % (self.name, self.address, self.value, value)
    self.value = value

class Fixture:
  def __init__(self, channel, name = None):
    self.channel = channel
    if not name:
      self.name = self.__class__.__name__
    else:
      self.name = name

    # (name, list<segments>)
    self.channels = []

    # caching of actual DMX values for channels
    self.values = []

  def set_values(self, mappings):
    """mappings is dict<channel, value>"""
    for (channel, value) in mappings:
      self.set_value(channel, value)

  def set_value(self, channel, value):
    # TODO: send DMX command
    (chname, segments) = self.channels[channel]
    print "%s.%d (%s): %d => %d" % (self.name, channel, chname, self.values[channel], value)
    self.values[channel] = value

  def intensity(self):
    """Return 0 to 255 for how intense the current values are"""
    return 0

  def next_effect(self, change = None, intensity = None):
    """Switch to the next effect.
    Change is 0 - 255 representing the ratio of parameters to change, or None to allow the fixture to choose.
    Intensity is 0 - 255 representing the desired intensity of the new effect, or None to allow the fuxture to choose."""
    pass
