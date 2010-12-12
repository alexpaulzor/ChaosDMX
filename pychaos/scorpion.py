
import random
from functools import partial

class Scorpion (Fixture):
  def __init__(self, address, name = "Scorpion"):
    super(Fixture, self).__init__(address, name)
    self.channels = [
      Channel("Mode", self.address + 0, [
        Segment("DMX", 10, None, 127, range(1, 8)),
        Segment("Auto fast red", 30, None, 150),
        Segment("Auto slow red", 50, None, 127),
        Segment("Auto fast green", 70, None, 175),
        Segment("Auto slow green", 90, None, 150),
        Segment("Auto fast red/green", 110, None, 200),
        Segment("Auto slow red/green", 130, None, 150),
        Segment("Sound red", 150, None, 175),
        Segment("Sound green", 170, None, 175),
        Segment("Sound red/green", 190, None, 200),
        Segment("Random", 190, None, 230)]),
      Channel("Color", self.address + 1, [
        Segment("Blackout", 0, None, 0),
        Segment("Red", 16, None, 127),
        Segment("Green", 42, None, 150),
        Segment("Red/green", 70, None, 175),
        Segment("Strobe green", 98, None, 200, [2]),
        Segment("Strobe red", 126, None, 175, [2]),
        Segment("Red/strobe green", 154, None, 200, [2]),
        Segment("Green/strobe red", 182, None, 180, [2]),
        Segment("Strobe red/green", 210, None, 250, [2]),
        Segment("Alt. strobe red/green", 238, None, 255, [2])]),
      Channel("Strobe", self.address + 2, [
        Segment("No strobe", 0, None, 0),
        Segment("Slow > fast", 5, 254, 200),
        Segment("Sound", 255, None, 150)]),
      Channel("Motor 1 rotation", self.address + 3, [
        Segment("No rotation", 0, None, 0),
        Segment("Clockwise slow > fast", 5, 127, 175),
        Segment("Stop", 128, 133, 127),
        Segment("Counterclockwise slow > fast", 134, 255, 175)]),
      Channel("Motor 1 stutter", self.address + 4, [
        Segment("No stutter", 0, None, 0),
        Segment("Mode 1 slow > fast", 5, 56, 200),
        Segment("Mode 2 slow > fast", 57, 112, 200),
        Segment("Mode 3 slow > fast", 113, 167, 200),
        Segment("Mode 4 slow > fast", 168, 255, 200)]),
      Channel("Motor 2 rotation", self.address + 5, [
        Segment("No rotation", 0, None, 0),
        Segment("Clockwise slow > fast", 5, 127, 175),
        Segment("Stop", 128, 133, 127),
        Segment("Counterclockwise slow > fast", 134, 255, 175)]),
      Channel("Motor 2 stutter", self.address + 6, [
        Segment("No stutter", 0, None, 0),
        Segment("Mode 1 slow > fast", 5, 56, 200),
        Segment("Mode 2 slow > fast", 57, 112, 200),
        Segment("Mode 3 slow > fast", 113, 167, 200),
        Segment("Mode 4 slow > fast", 168, 255, 200)])
    ]

    self.effects = []
    (None, hwsegments) = self.channels[0]
    for hwsegment in hwsegments[4:]:
      # make sure it is a sound active one.
      if len(hwsegment.enabled_channels) == 0:
        effects.append(partial(self.set_value, 0, hwsegment.low_value))

