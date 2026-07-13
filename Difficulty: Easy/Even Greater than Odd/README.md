<h2><a href="https://www.geeksforgeeks.org/problems/rearrange-array-such-that-even-positioned-are-greater-than-odd4804/1">Even Greater than Odd</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><div class="pointer-events-none h-px w-px absolute bottom-0" aria-hidden="true" data-edge="true">Given an array <strong>arr[]</strong>, rearrange its elements according to <strong>1-based </strong>indexing such that for every even index i, arr[i] is greater than or equal to arr[i-1], and for every odd index i, arr[i] is less than or equal to arr[i-1]. Return the rearranged array that satisfies these conditions for all valid indices.</div>
<div class="flex flex-col text-sm pb-25">
<article class="text-token-text-primary w-full focus:outline-none [--shadow-height:45px] has-data-writing-block:pointer-events-none has-data-writing-block:-mt-(--shadow-height) has-data-writing-block:pt-(--shadow-height) [&amp;:has([data-writing-block])&gt;*]:pointer-events-auto scroll-mt-[calc(var(--header-height)+min(200px,max(70px,20svh)))]" dir="auto" tabindex="-1" data-turn-id="request-WEB:8cf8c77d-35b5-48a8-b2c9-e38b4c3246f0-3" data-testid="conversation-turn-8" data-scroll-anchor="true" data-turn="assistant">
<div class="text-base my-auto mx-auto pb-10 [--thread-content-margin:--spacing(4)] @w-sm/main:[--thread-content-margin:--spacing(6)] @w-lg/main:[--thread-content-margin:--spacing(16)] px-(--thread-content-margin)">
<div class="[--thread-content-max-width:40rem] @w-lg/main:[--thread-content-max-width:48rem] mx-auto max-w-(--thread-content-max-width) flex-1 group/turn-messages focus-visible:outline-hidden relative flex w-full min-w-0 flex-col agent-turn" tabindex="-1">
<div class="flex max-w-full flex-col grow">
<div class="min-h-8 text-message relative flex w-full flex-col items-end gap-2 text-start break-words whitespace-normal [.text-message+&amp;]:mt-1" dir="auto" data-message-author-role="assistant" data-message-id="811302bf-e685-4328-ad78-5336d2d79618" data-message-model-slug="gpt-5-2">
<div class="flex w-full flex-col gap-1 empty:hidden first:pt-[1px]">
<div class="markdown prose dark:prose-invert w-full wrap-break-word dark markdown-new-styling">
<p data-start="0" data-end="329" data-is-last-node="" data-is-only-node=""><strong style="font-size: 18.6667px;">Note:</strong><span style="font-size: 18.6667px;"> The driver code will print "true" if your output array satisfies the conditions; otherwise, it will print "false".</span></p>
</div>
</div>
</div>
</div>
</div>
</div>
</article>
</div>
<p><span style="font-size: 14pt;"><strong>Example:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] =<strong> </strong>[1, 2, 2, 1]<strong>
Output: </strong>[1, 2, 1, 2]<strong>
Explanation: </strong>Both 2s are at even positions and 1s at odd positions, satisfying the given conditions.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] <strong>= </strong>[1, 3, 2]
<strong>Output: </strong>[1, 3, 2]
<strong>Explanation: </strong>The array is already arranged according to the conditions.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:<br></strong>1 ≤ arr.size() ≤ 10<sup>5</sup></span><br><span style="font-size: 14pt;">1 ≤ arr[i] ≤ 10<sup>4</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Sorting</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;