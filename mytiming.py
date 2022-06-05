import re


def getTimingMatMul(std, error):
    s = std.lstrip().rstrip()
    return float(s)