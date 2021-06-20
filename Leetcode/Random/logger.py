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
        if not message in self.dict.keys():
            print("Adding")
            self.dict[message] = timestamp
            return True
        
        else:
            if self.dict[message] + 10 <= timestamp:
                print(f'Value: {self.dict[message] + 10} <= {timestamp}')
                return True
            else:
                print("No print now return false")
                return False


# Your Logger object will be instantiated and called as such:
obj = Logger()
param1 = obj.shouldPrintMessage(1,"foo")
print(param1)
param1 = obj.shouldPrintMessage(2,"bar")
print(param1)
param1 = obj.shouldPrintMessage(7,"foo")
print(param1)
param1 = obj.shouldPrintMessage(11,"foo")
print(param1)
