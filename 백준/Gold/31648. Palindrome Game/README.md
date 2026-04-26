# [Gold IV] Palindrome Game - 31648 

[문제 링크](https://www.acmicpc.net/problem/31648) 

### 성능 요약

메모리: 2488 KB, 시간: 4 ms

### 분류

애드 혹, 게임 이론

### 제출 일자

2026년 04월 26일 13:41:35

### 문제 설명

<p>Bessie and Elsie are playing a game with a pile of stones that initially contains $S$ stones ($1\le S<10^{10^5}$). The two cows alternate turns, with Bessie going first. When it is a cow's turn, she must remove $x$ stones from the pile, where $x$ is any positive integer palindrome of the cow's choosing. If the pile is empty when a cow's turn starts, that cow loses.</p>

<p><strong>Definition:</strong> A positive integer is a palindrome if it reads the same forward and backward; examples of palindromes include 1, 121, and 9009. Leading zeros are not allowed; e.g., 990 is *not* a palindrome.</p>

<p>There are $T$ ($1\le T\le 10$) independent test cases. For each test case, print who wins the game if both cows play optimally.</p>

### 입력 

 <p>The first line contains $T$, the number of test cases. The next $T$ lines describe the test cases, one line per test case.</p>

<p>Each test case is specified by a single integer $S$.</p>

### 출력 

 <p>For each test case, output B if Bessie wins the game under optimal play starting with a pile of stones of size $S$, or E otherwise, on a new line.</p>

