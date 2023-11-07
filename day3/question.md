Problem:

Given the root to a binary tree, implement serialize(root), which serializes the tree into a string, and deserialize(s), which deserializes the string back into the tree.

Example:

Input: root = [1,2,3,null,null,4,5]

Output: 1-2-3--4-5--

Explanation:
The above binary tree is serialized as "1-2-3--4-5--".
Then this serialized string is deserialized as the original tree.
Constraints:

The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100
