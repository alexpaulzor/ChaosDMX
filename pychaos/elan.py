
import random
from functools import partial

class Elan (Fixture):
  def __init__(self, address, name = "Elan"):
    super(Fixture, self).__init__(address, name)
    self.channels = [
      Channel("Red", self.address + 0, [
        Segment("Off", 10, None, 0),
        Segment("On", 11, None, 127, [3])]),
      Channel("Green", self.address + 1, [
        Segment("Off", 10, None, 0),
        Segment("On", 11, None, 127, [3])]),
      Channel("Blue", self.address + 2, [
        Segment("Off", 10, None, 0),
        Segment("On", 11, None, 127, [3])]),
      Channel("Strobe", self.address + 3, [
        Segment("No strobe", 0, None, 127),
        Segment("Blackout", 8, None, 0),
        Segment("Slow > fast", 11, 255, 200)
    ]

    self.effects = []

    colorchannels = [0, 1, 2]
    strobes = [0, 50, 100]

    for strobe in strobes:
      for onch in colorchannels:
        mapping = { self.channels[onch]: 11, self.channels[3]: strobe }
        for offch in colorchannels:
          if offch != onch:
            mapping[self.channels[offch]] = 10
        self.effects.append(partial(self.set_values, mapping))
