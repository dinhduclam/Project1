import os

def addToDictionary(line):
    tab_index = line.find('\t')
    englishWord = line[0:tab_index]
    vietnameseWord = line[tab_index + 1: -1]

    englishWord = englishWord.strip()
    vietnameseWord = vietnameseWord.strip()

    dictionary[englishWord] = vietnameseWord

path = os.path.abspath("../File/Tu dien anh viet xay dung .txt")
f = open(path, "r", encoding='utf8')

dictionary = {}

while (1):
    line = f.readline()
    if line == '':
        break
    addToDictionary(line)

print("Nhap dau . de thoat!")

print("Nhap tu tieng Anh:", end=" ")
engWord = input()

while (engWord != '.'):
    vnWord = dictionary.get(engWord)

    if vnWord == None:
        print(f"Tu {engWord} khong co trong tu dien")
    else:
        print(f"Nghia cua tu {engWord} la: {vnWord}")

    print("Nhap tu tieng Anh:", end=" ")
    engWord = input()


f.close()