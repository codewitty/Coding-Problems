class LRUCache:

    def __init__(self, capacity: int):
        self.capacity = capacity
        self.dict = {}
        self.dict2 = {}
        

    def get(self, key: int) -> int:
        if key in self.dict:
            self.dict2[key] = self.dict2[key] + 1
            print(f'Dict2 after get: {self.dict2}')
            return self.dict[key]
        else:
            return -1

    def findMin(self) -> int:
        mins = 2147483647
        keya = 0
        for key, value in self.dict2.items():
            if value < mins:
                mins = value
                keya = key
        del self.dict[keya]
        

    def put(self, key: int, value: int) -> None:
        if len(self.dict) == self.capacity:
            self.findMin()

        if key in self.dict:
            self.dict[key] = value
        else:
            self.dict[key] = value
            self.dict2[key] = 0
            print(f'Dict1: {self.dict}')
            print(f'Dict2: {self.dict2}')


# Your LRUCache object will be instantiated and called as such:
obj = LRUCache(2)
obj.put(1,1)
obj.put(2,5)
param_1 = obj.get(1)
print(param_1)
obj.put(3,7)
