class Solution(object):
    def tree_diameter(self, edges):
        #Create dictionary
        tree = {}
        dia = 0
        for edge in edges:
            if edge[0] in tree.keys():
                if not isinstance(tree[edge[0]], list):
                    tree[edge[0]] = [tree[edge[0]]]
                tree[edge[0]].append(edge[1])
            else:
                tree[edge[0]] = edge[1]

        for edge in edges:
            if edge[1] in tree.keys():
                if not isinstance(tree[edge[1]], list):
                    tree[edge[1]] = [tree[edge[1]]]
                tree[edge[1]].append(edge[0])
            else:
                tree[edge[0]] = edge[1]
        for key in tree:
            d = []
            
            if isinstance(tree[key], list):
                kk


                
        return tree

obj1 = Solution()

edge = [[0,1],[1,2],[2,3],[1,4],[4,5]]

print(obj1.tree_diameter(edge))
