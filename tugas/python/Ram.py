class Ram():
    # constructor
    def __init__(self, capacity=0, price=0):
        self.__capacity = capacity
        self.__price = price

    # setter n getter
    def setCapacity(self, capacity):
        self.__capacity = capacity

    def getCapacity(self):
        return self.__capacity
        
    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price