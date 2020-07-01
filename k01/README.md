# 課題1 レポート

aa83988848 薗田光太郎

## 課題

標本男性の平均と分散を求めよ．また，「適当に選んだ」と言っても所詮聞く相手は周辺の同年代の同じ学部の友達に限定されそうである．周辺に住んでる同年代の工学部の男性の平均と分散を推定せよ．また，この推定される平均値は標本のとるたびに異なるので確率変数であり，今回推定した平均には誤差がある．その誤差（標準誤差）を求めよ．
   
標準誤差（standard error）は，<img src="/k01/tex/7cf3370ccf734d11f1d835f6a1512a7d.svg?invert_in_darkmode&sanitize=true" align=middle width=37.16830259999999pt height=54.157468200000004pt/>で求めることができる．

したがって，今回の課題について，

|統計量|値|
|---|---|
|標本平均|<img src="/k01/tex/24888b4e629550e584c5749d6e257804.svg?invert_in_darkmode&sanitize=true" align=middle width=45.66227159999998pt height=21.18721440000001pt/>|
|標本分散|<img src="/k01/tex/70fca7b16fd0d8e5da79e199011ede93.svg?invert_in_darkmode&sanitize=true" align=middle width=37.44306224999999pt height=21.18721440000001pt/>|
|母集団平均|<img src="/k01/tex/ffd02cd2a29ee359d050673905b82aaf.svg?invert_in_darkmode&sanitize=true" align=middle width=94.97731484999998pt height=21.18721440000001pt/>|
|母集団分散|<img src="/k01/tex/35ae058b877f36e7384685a2e19cb7e4.svg?invert_in_darkmode&sanitize=true" align=middle width=37.44306224999999pt height=21.18721440000001pt/>|

## ソースコードの説明
36行目　二乗の平均を求める
66行目　平均を求める関数
73行目　分散を求める関数


## 入出力結果

```
input the filename of sample:../sample/heights_male.csv
the filename of sample: ../sample/heights_male.csv
sample mean:173.89
sample variance:25.36
population mean (estimated):173.89
population variance (estimated):28.98
```

## 修正履歴

説明は「かきくけこ」だ！
