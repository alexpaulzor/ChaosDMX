
import random
from functools import partial

class ColorPalette (Fixture):
  def __init__(self, address, name = "ColorPalette"):
    super(Fixture, self).__init__(address, name)
    self.channels = [
      Channel("Mode", self.address + 0, [
        Segment("27 channel", 10, None, 127, range(2, 27)),
        Segment("15 channel", 30, None, 127, range(2, 15)),
        Segment("9 channel", 50, None, 127, range(2, 9)),
        Segment("6 channel", 70, None, 127, range(2, 6)),
        Segment("Sharp color change", 85, None, 200),
        Segment("Marching squares", 95, None, 127),
        Segment("Martching bars", 105, None, 127),
        Segment("Marching quarters", 115, None, 100),
        Segment("Red marching white bar", 125, None, 150),
        Segment("Red random white square", 135, None, 127),
        Segment("Red 2 random white squares (strobe)", 145, None, 200),
        Segment("Red marching quarters", 155, None, 150),
        Segment("Red marching square", 165, None, 127),
        Segment("Snake", 175, None, 127),
        Segment("Square at a time color change", 185, None, 127),
        Segment("Marching squares in halves (blue / white; red / green)", 195, None, 127),
        Segment("Red with marching squares on beat", 205, None, 175),
        Segment("White marching square/bar on beat", 215, None, 250),
        Segment("Red with 2 marching squares on beat", 225, None, 175),
        Segment("Gradual color change (no sound)", 235, None, 100, [1]),
        Segment("All sound modes", 245, None, 160)]),
      Channel("Speed", self.address + 1, [Segment("Slow > fast", 0, 255, None)]),
      Channel("Strobe", self.address + 2, [
        Segment("No strobe", 0, None, 0),
        Segment("Slow > fast", 3, 249, 200),
        Segment("Sound", 253, None, 150)]),
      Channel("Red 1", self.address + 3, [Segment("Intensity", 0, 255, 127)]),
      Channel("Green 1", self.address + 4, [Segment("Intensity", 0, 255, 127)]),
      Channel("Blue 1", self.address + 5, [Segment("Intensity", 0, 255, 127)]),
      Channel("Red 2", self.address + 6, [Segment("Intensity", 0, 255, 127)]),
      Channel("Green 2", self.address + 7, [Segment("Intensity", 0, 255, 127)]),
      Channel("Blue 2", self.address + 8, [Segment("Intensity", 0, 255, 127)]),
      Channel("Red 3", self.address + 9, [Segment("Intensity", 0, 255, 127)]),
      Channel("Green 3", self.address + 10, [Segment("Intensity", 0, 255, 127)]),
      Channel("Blue 3", self.address + 11, [Segment("Intensity", 0, 255, 127)]),
      Channel("Red 4", self.address + 12, [Segment("Intensity", 0, 255, 127)]),
      Channel("Green 4", self.address + 13, [Segment("Intensity", 0, 255, 127)]),
      Channel("Blue 4", self.address + 14, [Segment("Intensity", 0, 255, 127)]),
      Channel("Red 5", self.address + 15, [Segment("Intensity", 0, 255, 127)]),
      Channel("Green 5", self.address + 16, [Segment("Intensity", 0, 255, 127)]),
      Channel("Blue 5", self.address + 17, [Segment("Intensity", 0, 255, 127)]),
      Channel("Red 6", self.address + 18, [Segment("Intensity", 0, 255, 127)]),
      Channel("Green 6", self.address + 19, [Segment("Intensity", 0, 255, 127)]),
      Channel("Blue 6", self.address + 20, [Segment("Intensity", 0, 255, 127)]),
      Channel("Red 7", self.address + 21, [Segment("Intensity", 0, 255, 127)]),
      Channel("Green 7", self.address + 22, [Segment("Intensity", 0, 255, 127)]),
      Channel("Blue 7", self.address + 23, [Segment("Intensity", 0, 255, 127)]),
      Channel("Red 8", self.address + 24, [Segment("Intensity", 0, 255, 127)]),
      Channel("Green 8", self.address + 25, [Segment("Intensity", 0, 255, 127)]),
      Channel("Blue 8", self.address + 26, [Segment("Intensity", 0, 255, 127)])
    ]

    self.effects = []
    (None, hwsegments) = self.channels[0]
    for hwsegment in hwsegments[4:]:
      if 1 in hwsegment.enabled_channels
      effects.append(partial(self.set_value, 0, hwsegment.low_value
