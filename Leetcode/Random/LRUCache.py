class LRUCache:

    def __init__(self, capacity: int):
        self.capacity = capacity
        self.dict = {}
        self.stack = []
        

    def get(self, key: int) -> int:
        if key in self.dict:
            self.rearrange(key)
            return self.dict[key]
        else:
            return -1

    def findMin(self) -> int:
        keya = self.stack.pop(0)
        self.dict.pop(keya)

    def rearrange(self, key) -> int:
        self.stack.remove(key)
        self.stack.append(key)

    def put(self, key: int, value: int) -> None:
        if len(self.dict) == self.capacity:
            self.findMin()

        if key in self.dict:
            self.rearrange(key)
            self.dict[key] = value
        else:
            self.dict[key] = value
            self.stack.append(key)
            print(f'Dict1: {self.dict}')
            print(f'Stack: {self.stack}')


# Your LRUCache object will be instantiated and called as such:
obj = LRUCache(2)
obj.put(1,1)
obj.put(2,5)
param_1 = obj.get(1)
print(param_1)
obj.put(3,3)
param_1 = obj.get(2)
print(param_1)
obj.put(4,4)
param_1 = obj.get(1)
print(param_1)
param_1 = obj.get(3)
print(param_1)
param_1 = obj.get(4)
print(param_1)
