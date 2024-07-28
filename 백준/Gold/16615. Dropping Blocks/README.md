# [Gold II] Dropping Blocks - 16615 

[문제 링크](https://www.acmicpc.net/problem/16615) 

### 성능 요약

메모리: 2412 KB, 시간: 12 ms

### 분류

애드 혹

### 제출 일자

2024년 7월 28일 23:04:45

### 문제 설명

<p>Daniel likes playing a game with blocks. The game starts with N empty piles of blocks in a line. While playing the game, Daniel does the following operation: he chooses a pile k and puts a block in every pile either to the left or to the right of pile k (including pile k). A valid game state is reached by applying only this operation zero or more times.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/392b8383-fa28-49a3-b813-bf13cd04feee/-/preview/" style="width: 592px; height: 84px;"></p>

<p>For example, in the above image, Daniel played a game with four piles and performed four operations. Firstly, he put one block in each pile to the left of pile 2 (including pile 2), then he put one block in each pile to the right of pile 2 (including pile 2), then he put one block in each pile to the left of pile 3 (including pile 3), and finally, he put one block in each pile to the left of pile 1 (including pile 1).</p>

<p>Given the number of blocks in each pile, determine if it is a valid game state.</p>

### 입력 

 <p>The first line contains a single integer N (1 ≤ N ≤ 100 000), which is the number of piles.</p>

<p>The second line describes the piles. The line contains N integers, each of which is the number of blocks in a pile. The piles are listed from left to right and each number is at least 0 and at most 100 000.</p>

### 출력 

 <p>Display if the input describes a valid game state.</p>

