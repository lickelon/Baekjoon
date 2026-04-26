# [Platinum III] Squarks - 8230 

[문제 링크](https://www.acmicpc.net/problem/8230) 

### 성능 요약

메모리: 8056 KB, 시간: 368 ms

### 분류

애드 혹, 브루트포스 알고리즘, 자료 구조, 수학, 정렬

### 제출 일자

2026년 04월 26일 13:41:35

### 문제 설명

<p>A famous Byteotian physicist Byteasar is studying a new constituent of matter - squarks. These are quite exotic particles that never exist alone but always in pairs. Moreover, squarks of a particular kind form pairs only with squarks of different kinds.</p>

<p>After years of studies Byteasar has established that there are n different kinds of squarks. Squarks of each kind have a unique mass, which is a positive integer multiple of (an appropriate) unit. Byteasar has also measured the total mass of each of the \( \frac {n(n-1)}{2} \) possible pairs of squarks. According to standard Byteotian model of physics, the mass of a pair of squarks equals the sum of the masses of the two squarks forming it.</p>

<p>Now Byteasar desires to determine the individual masses of squarks of every kind. He has asked your help in writing a program that will determine all solutions to this puzzle, i.e., will reconstruct all configurations of squark masses that are consistent with his previous measurements.</p>

### 입력 

 <p>In the first line of the standard input there is a single integer n (3 ≤ n ≤ 300) that denotes the number of different kinds of squarks. In the second line there are \( \frac {n(n-1)}{2} \) positive integers, separated by single spaces, that denote the total masses of all possible pairs of squarks. The mass of every pair does not exceed 10<sup>8</sup>. For each two different kinds of squarks, the mass of the pair they form is given on the input exactly once. The masses on the input are given in a random order.</p>

<p>In tests worth 32% of the points the following conditions hold in addition: n ≤ 20 and the mass of every pair of squarks does not exceed 2,000.</p>

### 출력 

 <p>In the first line of the standard output your program should print the number k of possible solutions to the problem. In the k lines that follow it should report successive solutions, one per line. Each solution should consist of n different positive integers, namely the masses of squarks of all kinds. In every solution these should be given in increasing order and separated by single spaces.</p>

<p>Solutions can be reported in arbitrary order, but they cannot be repeated. You may assume that for each test data there exists at least one solution, i.e., k > 0.</p>

