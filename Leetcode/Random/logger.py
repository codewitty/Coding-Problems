class Logger:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.dict = {}
        

    def shouldPrintMessage(self, timestamp: int, message: str) -> bool:
        """
        Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity.
        """
        value = self.dict.get(message, -1)

        if value > timestamp:
            return False
        
        self.dict[message] = timestamp + 10
        return True


# Your Logger object will be instantiated and called as such for testing
obj = Logger()
param1 = obj.shouldPrintMessage(1,"foo")
print(param1)
param1 = obj.shouldPrintMessage(2,"bar")
print(param1)
param1 = obj.shouldPrintMessage(7,"foo")
print(param1)
param1 = obj.shouldPrintMessage(11,"foo")
print(param1)
param1 = obj.shouldPrintMessage(11,"foo")
print(param1)
