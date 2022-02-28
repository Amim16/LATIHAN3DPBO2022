from Disk import Disk
from Processor import Processor
from Ram import Ram

class Pc():
    # constructor
    def __init__(self, disk=Disk(), ram=Ram(), processor=Processor(), totalPrice=0):
        self.__disk = disk
        self.__ram = ram
        self.__processor = processor
        self.__totalPrice = totalPrice

    # setter n getter
    def setDisk(self, disk):
        self.__disk = disk

    def getDisk(self):  
        return self.__disk

    def setRam(self, ram):
        self.__ram = ram

    def getRam(self):
        return self.__ram

    def setProcessor(self, processor):
        self.__processor = processor

    def getProcessor(self):
        return self.__processor

    def setTotalPrice(self, totalPrice):
        self.__totalPrice = totalPrice

    def getTotalPrice(self):
        return self.__totalPrice