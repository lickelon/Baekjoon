# [Gold V] Chocolate Chip Fabrication - 27570 

[문제 링크](https://www.acmicpc.net/problem/27570) 

### 성능 요약

메모리: 10220 KB, 시간: 40 ms

### 분류

너비 우선 탐색, 그래프 이론, 그래프 탐색

### 제출 일자

2024년 8월 1일 21:31:49

### 문제 설명

<p>You are making a chocolate chip cookie using a machine that has a rectangular pan composed of unit squares. You have determined the shape of your cookie, which occupies some squares in that area. Each square of your cookie must be chocolate chipified.</p>

<p>To make the cookie you will repeatedly perform the following two steps:</p>

<ol>
	<li>You place cookie dough in some unit squares.</li>
	<li>You expose the cookie dough to a shallow chocolate chip solution. Any cookie dough square that does not have all four adjacent squares (up, down, left, right) filled with cookie dough becomes chocolate chipified. Note that any cookie dough in a square on the boundary of the pan always gets chipified.</li>
</ol>

<p>The following example shows how to make a cookie of the shape shown on the left (s):</p>

<pre>    (s)      (a1)     (a2)     (b1)     (b2) 
    -X-X-    -D-D-    -C-C-    -C-C-    -C-C-
    XXXXX    -D-D-    -C-C-    DCDCD    CCCCC
    XXXXX    -DDD-    -CCC-    DCCCD    CCCCC
    -XXX-    --D--    --C--    -DCD-    -CCC-
    --X--    -----    -----    --D--    --C--
</pre>

<p>First you place cookie dough in $8$ squares (a1). All squares become chipified after the first solution exposure (a2). You place cookie dough in $8$ more squares (b1). The second exposure makes every square chipified and completes the cookie (b2).</p>

<p>Your chocolate chip solution is expensive, so you want to ensure that you perform the exposure as few times as possible. Given a cookie shape, determine the minimum number of chocolate chip solution exposures required to make the cookie.</p>

### 입력 

 <p>The first line of input contains two integers $n$ and $m$ ($1 \leq n, m \leq 1\,000$), indicating the pan has $n$ rows and $m$ columns of unit squares.</p>

<p>Each of the next $n$ lines contains a string of exactly $m$ characters, where each character is either "<code>X</code>", representing a square occupied by your cookie, or "<code>-</code>", representing an empty square. </p>

<p>The shape of your cookie occupies at least one square. Note that the shape may consist of multiple pieces that are disconnected.</p>

### 출력 

 <p>Output the minimum number of chocolate chip solution exposures required to make your cookie.</p>

