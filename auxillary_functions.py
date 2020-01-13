import time
import datetime


def get_timestamp():
    return str(datetime.datetime.now().timestamp()) + '.json'


def get_timestr():
    return time.strftime("%Y%m%d-%H%M%S") + '.json'
