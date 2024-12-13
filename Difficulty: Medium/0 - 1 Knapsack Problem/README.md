<h2><a href="https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1?page=1&category=Dynamic%20Programming&sortBy=submissions">0 - 1 Knapsack Problem</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given weights and values of items, and put these items in a knapsack of capacity <strong>W</strong> to get the maximum total value in the knapsack. Note that we have only <strong>one quantity of each item</strong>.<br>In other words, given two integer arrays <strong>val</strong>&nbsp;and <strong>wt</strong> which represent values and weights associated with items respectively. Also given an integer W which represents knapsack capacity, find out the <strong>maximum sum values </strong>subset of <strong>val[]</strong> such that the sum of the weights of the corresponding subset is smaller than or equal to <strong>W.</strong> You cannot break an item, <strong>either pick the complete item or don't pick it (0-1 property)</strong>.</span></p>
<p><strong><span style="font-size: 18px;">Examples :</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input: </span></strong><span style="font-size: 18px;">W = 4, val[] = {1,2,3}, wt[] = {4,5,1}
<strong>Output: </strong>3<br><strong>Explanation: </strong></span><span style="font-size: 18px;">Choose the last item that weighs 1 unit and holds a value of 3.</span><span style="font-size: 18px; font-family: sans-serif;"> </span></pre>
<pre><strong><span style="font-size: 18px;">Input:</span></strong><span style="font-size: 18px;"> W = 3, val[] = {1,2,3}, wt[] = {4,5,6}
<strong>Output: </strong>0<br><strong>Explanation: </strong>Every item has a weight exceeding the knapsack's capacity (3).<br></span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N*W).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(N*W)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">2 ≤ N ≤ 1000</span><br><span style="font-size: 18px;">1 ≤ W ≤ 1000</span><br><span style="font-size: 18px;">1 ≤ wt[i] ≤ 1000</span><br><span style="font-size: 18px;">1 ≤ val[i] ≤ 1000</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Morgan Stanley</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>Oracle</code>&nbsp;<code>Payu</code>&nbsp;<code>Visa</code>&nbsp;<code>Directi</code>&nbsp;<code>GreyOrange</code>&nbsp;<code>Mobicip</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;