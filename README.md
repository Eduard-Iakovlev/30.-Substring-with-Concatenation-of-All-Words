# 30. Substring with Concatenation of All Words

You are given a string s and an array of strings words. All the strings of words are of the same length.

concatenated string is a string that exactly contains all the strings of any permutation of words concatenated.

For example, if words = ["ab","cd","ef"], then "abcdef", "abefcd", "cdabef", "cdefab", "efabcd", and "efcdab" are all concatenated strings. "acdbef" is not a concatenated string because it is not the concatenation of any permutation of words.
Return an array of the starting indices of all the concatenated substrings in s. You can return the answer in any order.

 

Example 1:

Input: s = "barfoothefoobarman", words = ["foo","bar"]

Output: [0,9]

Explanation:

The substring starting at 0 is "barfoo". It is the concatenation of ["bar","foo"] which is a permutation of words.
The substring starting at 9 is "foobar". It is the concatenation of ["foo","bar"] which is a permutation of words.

Example 2:

Input: s = "wordgoodgoodgoodbestword", words = ["word","good","best","word"]

Output: []

Explanation:

There is no concatenated substring.

Example 3:

Input: s = "barfoofoobarthefoobarman", words = ["bar","foo","the"]

Output: [6,9,12]

Explanation:

The substring starting at 6 is "foobarthe". It is the concatenation of ["foo","bar","the"].
The substring starting at 9 is "barthefoo". It is the concatenation of ["bar","the","foo"].
The substring starting at 12 is "thefoobar". It is the concatenation of ["the","foo","bar"].

 

Constraints:

1 <= s.length <= 104
1 <= words.length <= 5000
1 <= words[i].length <= 30
s and words[i] consist of lowercase English letters.

# 30. Подстрока с объединением всех слов

Вам дана строка s и массив строк words. Все строки в words имеют одинаковую длину.

объединённая строка — это строка, которая в точности содержит все строки любой перестановки words в объединённом виде.

Например, если words = ["ab","cd","ef"], то "abcdef", "abefcd", "cdabef", "cdefab", "efabcd" и "efcdab" — это строки, полученные путём объединения. "acdbef" не является строкой, полученной путём объединения, потому что это не объединение какой-либо перестановки words.
Верните массив начальных индексов всех объединённых подстрок в s. Вы можете вернуть ответ в любом порядке.

 

Пример 1:

Ввод: s = "barfoothefoobarman", слова = ["foo", "bar"]

Вывод: [0,9]

Объяснение:

Подстрокой, начинающейся с 0, является "barfoo". Это объединение ["bar","foo"], которое является перестановкой words.
Подстрока, начинающаяся с 9, является "foobar". Это объединение ["foo","bar"], которое является перестановкой words.

Пример 2:

Входные данные: s = "wordgoodgoodgoodbestword", words = ["word", "good", "best", "word"]

Вывод: []

Объяснение:

Объединённой подстроки не существует.

Пример 3:

Ввод: s = "barfoofoobarthefoobarman", слова = ["bar", "foo", "the"]

Вывод: [6,9,12]

Объяснение:

Подстрока, начинающаяся с 6, является "foobarthe". Это объединение ["foo","bar","the"].
Подстрока, начинающаяся с 9, является "barthefoo". Это объединение ["bar","the","foo"].
Подстрока, начинающаяся с 12, является "thefoobar". Это объединение ["the","foo","bar"].

 

Ограничения:

1 <= s.length <= 104
1 <= words.length <= 5000
1 <= words[i].length <= 30
s и words[i] состоят из строчных букв английского алфавита.