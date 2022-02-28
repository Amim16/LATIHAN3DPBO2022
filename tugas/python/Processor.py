class Processor():
    # constructor
    def __init__(self, name="-", price=0):
        self.__name = name
        self.__price = price

    # setter n getter
    def setName(self, name):
        self.__name = name

    def getName(self):
        return self.__name

    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price