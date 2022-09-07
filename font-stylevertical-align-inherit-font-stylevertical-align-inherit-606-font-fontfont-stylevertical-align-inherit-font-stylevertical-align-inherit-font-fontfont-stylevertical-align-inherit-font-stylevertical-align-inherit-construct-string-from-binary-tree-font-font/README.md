<h2><a href="https://leetcode.com/problems/construct-string-from-binary-tree/"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">606</font></font><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">. </font></font><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Construct String from Binary Tree</font></font></a></h2><h3>Easy</h3><hr><div><p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Given the </font></font><code>root</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> of a binary tree, construct a string consisting of parenthesis and integers from a binary tree with the preorder traversal way, and return it.</font></font></p>

<p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Omit all the empty parenthesis pairs that do not affect the one-to-one mapping relationship between the string and the original binary tree.</font></font></p>

<p>&nbsp;</p>
<p><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Example 1:</font></font></strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/cons1-tree.jpg" style="width: 292px; height: 301px;">
<pre><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Input:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> root = [1,2,3,4]
</font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Output:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> "1(2(4))(3)"
</font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Explanation:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> Originally, it needs to be "1(2(4)())(3()())", but you need to omit all the unnecessary empty parenthesis pairs. And it will be "1(2(4))(3)"
</font></font></pre>

<p><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Example 2:</font></font></strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/cons2-tree.jpg" style="width: 207px; height: 293px;">
<pre><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Input:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> root = [1,2,3,null,4]
</font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Output:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> "1(2()(4))(3)"
</font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Explanation:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> Almost the same as the first example, except we cannot omit the first parenthesis pair to break the one-to-one mapping relationship between the input and the output.
</font></font></pre>

<p>&nbsp;</p>
<p><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Constraints:</font></font></strong></p>

<ul>
	<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">The number of nodes in the tree is in the range </font><font style="vertical-align: inherit;">.</font></font><code>[1, 10<sup>4</sup>]</code><font style="vertical-align: inherit;"></font></li>
	<li><code>-1000 &lt;= Node.val &lt;= 1000</code></li>
</ul>
</div>