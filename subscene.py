import random

class Fixture:
  def __init__(self, channel_number, channels = [], name = "Untitled Fixture"):
    self.name = name
    self.channel_number = channel_number
    self.channels = channels
    for channel in self.channels:
      channel.set_fixture(self)

class ChannelSegment:
  """A block of values that share functionality."""

  # For fader
  DARK = 0
  LIGHT = 1

  # For speed
  STILL = 9
  SLOW = 2
  FAST = 3

  # For shutter
  OFF = 4
  ON = 5
  
  # Categories
  SHUTTER = 6
  FADER = 7
  SPEED = 8

  SELECTOR = 10

  def __init__(self, category = FADER, low_value = 0, low_meaning = DARK, high_value = 255, high_meaning = LIGHT, description = "Default ChannelSegment"):
    self.category = category
    self.low_value = low_value
    self.low_meaning = low_meaning
    self.high_value = high_value
    self.high_meaning = high_meaning
    self.description = description
    self.channel = None

  def set_channel(self, channel):
    self.channel = channel

  def is_fader(self):
    return self.category == FADER

  def single_valued(self):
    return self.low_meaning == self.high_meaning

  def has_on(self):
    return self.on() == ON or self.on() == LIGHT or self.on() == FAST

  def has_off(self):
    return self.off() == OFF or self.off() == DARK or self.off() == STILL

  def off(self):
    if self.high_meaning == DARK or self.high_meaning == OFF or self.high_meaning == STILL:
      return self.high_value
    else:
      return self.low_value

  def on(self):
    if self.low_meaning == ON or self.low_meaning == FAST or self.low_meaning == LIGHT:
      return self.low_value
    else:
      return self.high_value

  def random(self, bias = 0.60):
    """Pick a random value in the range, biased toward light, on, or fast."""
    if self.category == SHUTTER:
      # binary choice
      if random.random() < bias:
        return self.on()
      else:
        return self.off()
    else:
      # continuum
      midpoint = (self.low_value + self.high_value) * bias
      direct = random.triangular(self.low_value, self.high_value, midpoint)
      # flip the offset if light/fast is at low
      if self.on() == self.low_value:
        return self.low_value + (self.high_value - direct)
      else:
        return direct

class Channel:
  RED = 0
  GREEN = 1
  BLUE = 2
  STROBE = 3
  MOTION = 4
  NOOP = 5
  MODE = 6

  def __init__(self, segments = [], category = NOOP, name = "Untitled Channel"):
    self.segments = segments
    self.category = category
    self.name = name
    self.fixture = None
    for segment in self.segments:
      segment.set_channel(self)

  def set_fixture(self, fixture):
    self.fixture = fixture

class SubSceneConfig:
  def __init__(self, fixture, 

class SubScene:
  def __init__(self):

