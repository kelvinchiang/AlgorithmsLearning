# N叉树的深度
最大深度是指从根节点到最远叶子节点的最长路径上的节点总数。

```python
"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def maxDepth(self, root: 'Node') -> int:
        if not root:
            return 0
        if not root.children:
            return 1
        return max([self.maxDepth(child) for child in root.children]) + 1
```

# N叉树的后序遍历

```python
class Solution:
    def postorder(self, root: 'Node') -> List[int]:
        result = []

        def postHelper(root):
            if not root:
                return None
            children = root.children
            for child in children:
                postHelper(child)
            result.append(root.val)

        postHelper(root)
        return result

```
迭代解法：
```python
class Solution:
    def postorder(self, root: 'Node') -> List[int]:
        if not root:
            return None
        stack_run = [root]
        result = []
        while stack_run:
            node = stack_run.pop()
            result.append(node.val)
            children = node.children
            for child in children:
                if child:
                    stack_run.append(child)
        # 本质是前序遍历后，反转
        result.reverse()
        return result

```



