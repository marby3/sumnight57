# ファームウェアの書き込みについて ##
## QKM firmwareのビルド環境の整備 ##
下記のURL内を熟読の上、OSごとにビルド環境を整備します。
https://docs.qmk.fm/#/newbs_getting_started?id=setting-up-your-qmk-environment

## QMKのダウンロード ##
下記のページよりzipでDLします。
https://github.com/qmk/qmk_firmware/tree/master

このようにしてダウンロードしたzipを解凍し、わかりやすい位置に配置します。

## ビルド環境の整備 ##
本リポジトリのQMK_v0.22内にあるkeyboard/keyball内のファイルをQMK_firmwareのフォルダに配置します。
その後、cdでqmkのリポジトリに移動します。

仮に、C:\qmk_firmwareに先程ダウンロードしたファイルを配置した場合、
「cd /c/qmk_firmware」で移動できます。

その後、
「qmk setup -H /c/qmk_firmware」
を実行し、ビルド環境を整えます。

これでビルドができるようになります。

## ビルド ##
Sumnight57は、いくつかの要因により左手と右手を明示的にビルド時に指示する必要があります。

- 左手の場合
左手側のPro Microに接続し、
「qmk flash -kb keyball/sumnight57 -km via -bl avrdude-split-left」
を実行します。
これを実行すると、ファームウェアのビルドとともに書き込み待機状態に入ります。
書き込み待機状態になったら、リセットボタンを2回押すことで、実際に書き込みが行われます。
このようにして書き込んだPro Microが取り付けられている方は、左手のキーマップが認識されます。

- 右手の場合
右手側のPro Microに接続し、
「qmk flash -kb keyball/sumnight57 -km via -bl avrdude-split-right」
を実行します。
これを実行すると、ファームウェアのビルドとともに書き込み待機状態に入ります。
書き込み待機状態になったら、リセットボタンを2回押すことで、実際に書き込みが行われます。
このようにして書き込んだPro Microが取り付けられている方は、右手のキーマップが認識されます。
