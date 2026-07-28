<h2><a href="https://www.geeksforgeeks.org/problems/rearrange-an-array-such-that-arri-i3618/1">Rearrange to Make arr[i] = i</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given an array <strong>arr[]</strong> with indices ranging from <strong>0 </strong>to <strong>arr.size() - 1</strong>, rearrange the elements so that the value at each index <strong>i </strong>becomes <strong>i</strong>. If the value <strong>i </strong>is not present in the array, place <strong>-1 </strong>at index <strong>i</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Note</strong>: The array does not contain any duplicate non-negative values.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> arr[] = [-1, -1, 6, 1, 9, 3, 2, -1, 4, -1]
<strong>Output:</strong> [-1, 1, 2, 3, 4, -1, 6, -1, -1, 9]
<strong>Explanation: </strong>In range 0 to 9, all except 0, 5, 7 and 8 are present. Hence, we print -1 instead of them.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> arr[] = [0, 1, 2, 3, 4, 5] <strong>
Output:</strong> [0, 1, 2, 3, 4, 5]<br><strong>Explanation: </strong>In range 0 to 5, all number are present.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>5</sup><br>0 ≤ arr[i] ≤ arr.size()-1</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;