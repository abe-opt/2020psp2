# 課題4 レポート

aa83988848 薗田光太郎

## 課題

[../sample/heights.csv]は標本全体（男性と女性合わせた14人）のデータをまとめたものである．
一方，[../sample/IDs.csv]は標本14人の学籍番号（身長データと同じ順番）である．
学籍番号を尋ねて，その学籍番号のデータがリストにあれば，学籍番号，身長，性別のデータを表示し，リストになければ，「No data」と表示せよ．

この二つのファイルを読み取り，学籍番号，身長，性別の3つをメンバーとする構造体の配列で管理するとよい．

## ソースコードの説明
l.50~62 身長,　性別, IDのデータを　heights, gender, IDに代入
l.64 IDの入力
l.72~79 性別の判定
l.66~88 IDがあれば、性別を判定し身長、性別、IDを表示。なければ、nodataをカウントする。
l.90~93 nodataが14に達したときNo data と表示

## 入出力結果

例えば，ID 45313125のデータを調べたいとき，

```
Input the filename of sample height : ../sample/heights.csv
Input the filename of sample ID : ../sample/IDs.csv
Which ID's data do you want? : 45313125
---
ID : 45313125
gender : Female
height : 152.4
```
Input the filename of sample height : ../sample/heights.csv
Input the filename of sample ID : ../sample/IDs.csv
Which ID's data do you want? : 45313125
---
ID : 45313125
gender : Female
height : 152.4
```

例えば，ID 45313124のデータを調べたいとき，

```
Input the filename of sample height : ../sample/heights.csv
Input the filename of sample ID : ../sample/IDs.csv
Which ID's data do you want? : 45313124
---
No data
```
Input the filename of sample height : ../sample/heights.csv
Input the filename of sample ID : ../sample/IDs.csv
Which ID's data do you want? : 45313124
---
No data
```



## 修正履歴

[comment #20200721 moto]
- OKです。

[comment #20200731 sonoda]
- 原則「関数の中に生の数字を書かない」です．14と15のことです．14は学生の人数だと思いますが，それならば
  main関数の外に，`#include`の並びに，
  ```
  #define NUM 14
  ```
  などと数字に別名をつけておき，main関数では，`14`の代わりに`NUM`を書きます．
  
  15は何ですか？`NUM+1`でしょうか．

[comment #20200804 sonoda]
- OKです．課題4完了
