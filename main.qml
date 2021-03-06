import QtQuick 2.9
import QtQuick.Window 2.2

import QtQuick.Controls 1.4
import QtQuick.Layouts 1.3


//Window { // old
    ApplicationWindow {
    width: 1200;  height: 480

  //  modality: Qt.ApplicationHidden

    modality: Qt.ApplicationModal

    visible: true
    title: qsTr("main")

    RowLayout {
        x: 13
        y: 3
        width: 1131
        height: 72

        Button
        {
            text: "1"

            Image {
                source: "res/2k.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("2k")
        }

        Button
        {
            text: "1"

            Image {
                source: "res/3k.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("3k")
        }

        Button
        {
            text: "1"

            Image {
                source: "res/4k.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("4k")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/5k.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("5k")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/6k.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("6k")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/7k.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("7k")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/8k.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("8k")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/9k.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("9k")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/10k.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("10k")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/ak.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("ak")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/jk.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("jk")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/kk.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("kk")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/qk.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("qk")
        }


    } // RowLayout

    RowLayout {
        x: 13
        y: 58
        width: 1131
        height: 72

        Button
        {
            text: "1"

            Image {
                source: "res/2b.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("2b")
        }

        Button
        {
            text: "1"

            Image {
                source: "res/3b.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("3b")
        }

        Button
        {
            text: "1"

            Image {
                source: "res/4b.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("4b")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/5b.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("5b")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/6b.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("6b")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/7b.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("7b")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/8b.PNG"
                 //anchors.fill: parent
                 //fillMode: Image.Tile
             }
             checkable: true; checked: true

             Layout.minimumWidth: 1
             Layout.minimumHeight: 40
             onClicked: FormUserInput.receiveFromQml("8b")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/9b.PNG"
                //anchors.fill: parent
                //fillMode: Image.Tile
            }
            checkable: true; checked: true

            Layout.minimumWidth: 1
            Layout.minimumHeight: 40
            onClicked: FormUserInput.receiveFromQml("9b")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/10b.PNG"
                //anchors.fill: parent
                //fillMode: Image.Tile
            }
            checkable: true; checked: true

            Layout.minimumWidth: 1
            Layout.minimumHeight: 40
            onClicked: FormUserInput.receiveFromQml("10b")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/ab.PNG"
                //anchors.fill: parent
                //fillMode: Image.Tile
            }
            checkable: true; checked: true

            Layout.minimumWidth: 1
            Layout.minimumHeight: 40
            onClicked: FormUserInput.receiveFromQml("ab")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/jb.PNG"
                //anchors.fill: parent
                //fillMode: Image.Tile
            }
            checkable: true; checked: true

            Layout.minimumWidth: 1
            Layout.minimumHeight: 40
            onClicked: FormUserInput.receiveFromQml("jb")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/kb.PNG"
                //anchors.fill: parent
                //fillMode: Image.Tile
            }
            checkable: true; checked: true

            Layout.minimumWidth: 1
            Layout.minimumHeight: 40
            onClicked: FormUserInput.receiveFromQml("kb")
        }


        Button
        {
            text: "1"

            Image {
                source: "res/qb.PNG"
                //anchors.fill: parent
                //fillMode: Image.Tile
            }
            checkable: true; checked: true

            Layout.minimumWidth: 1
            Layout.minimumHeight: 40
            onClicked: FormUserInput.receiveFromQml("qb")
        }


    }

    RowLayout {
        x: 13
        y: 114
        width: 1131
        height: 72
        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/2c.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("2c")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/3c.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("3c")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/4c.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("4c")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/5c.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("5c")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/6c.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("6c")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/7c.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("7c")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/8c.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("8c")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/9c.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("9c")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/10c.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("10c")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/ac.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("ac")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/jc.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("jc")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/kc.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("kc")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/qc.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("qc")
        }
    }

    RowLayout {
        x: 13
        y: 175
        width: 1131
        height: 72
        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/2p.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("2p")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/3p.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("3p")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/4p.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("4p")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/5p.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("5p")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/6p.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("6p")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/7p.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("7p")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/8p.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("8p")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/9p.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("9p")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/10p.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("10p")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/ap.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("ap")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/jp.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("jp")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/kp.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("kp")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/qp.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("qp")
        }
    }

    RowLayout {
        x: 788
        y: 230
        width: 356
        height: 72
        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/joker_black.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("joker_black")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/joker_red.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("joker_red")
        }

        Button {
            text: "1"
            Layout.minimumHeight: 40
            checked: true
            Image {
                source: "res/romb_blue.PNG"
            }
            Layout.minimumWidth: 1
            checkable: true
            onClicked: FormUserInput.receiveFromQml("romb_blue")
        }

    }


    PlayerStat {
        id : formPlayerStat
    }

    TablePlayers{
        id : formTablePlayers
    }

    FormServerActions {
        id : formServerActions
    }


    Connections {
        target: FormRenderInfo

        onTara : //(QString str);
        {
            button_dbg_render.text = str
        }
  }

    Connections {
        target: FormUserInput // ?????????????????? ?????????????? ???????????? ?????? ????????????????????
        /* ?????????????????? ?? ?????????????????? ??????????????, ?????? ????????????????
             * ?????????????? ?? ?? ???????????????? ?????????????? ???? ???????????????? ??????????????
             * ?????????????? ?? ??????, ?????? ?????????????????? ?? ???????????? on ?? ?????????? ??????????
             * ?? ?????????????????? ??????????
             * */
        onSendToQml: {
            labelCount.text = count // ?????????????????????????? ?????????????? ?? ?????????????????? ??????????
        }


        onServerCmd_Fold : {
            FormUserInput.clearPlayingCards();
        }

        onSetIndicatorFirstPlayerCard :  {

            textPlayerCard.text = str
            imageFirstPlayerCards.source = str
        }

        onSetIndicatorSecondPlayerCard : {

            textPlayerCard.text = str
            imageSecondPlayerCards.source = str
        }
    }


    Label {
        id: labelCount
        text: "0"

        anchors.bottom: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottomMargin: 15
    }





    Rectangle{
        border.color: "black"

        x: 13; y: 344; width: 524; height: 44

        RowLayout {
            anchors.fill: parent
            Button
            {
                text: "???????????? ???? ?????????? ?? ????????????????"
                onClicked:
                {
                    FormCheatServerAction.compute_hod()
                }
            }

            Button {
                id: button_dbg_render
                text: "dbg"
                onClicked: { FormRenderInfo.dbg () }
            }

            Button {
                text: "?????????????? ????????????????????"
            }

            Button {
                text: "?????????????????? ????????"
            }
        }
    }
    RowLayout {
        id : rowlayoutStat
        x: 369;  y: 412
        width: 313
        height: 44

        Rectangle{
            width:  rowlayoutStat.width
            height: rowlayoutStat.height
            border.color: "black"

            Text {

                x: 8
                y: 16
                text: qsTr("???????? ?????????? ")
            }

            Rectangle{
                x: 134
                y: 0
                width:  46
                height: 44
                border.color: "black"

                Layout.minimumHeight: 40
                Layout.minimumWidth: 1
                Image {
                      id: imageSecondPlayerCards
                    source: " "
                }
            }

            Rectangle{
                x: 75
                y: 0
                width:  46
                height: 44
                border.color: "black"

                Layout.minimumHeight: 40
                Layout.minimumWidth: 1
                Image {
                    id: imageFirstPlayerCards
                    source: " "
                }
            }

            Text {
                id: textPlayerCard
                x: 190
                y: 16
                text: qsTr("7?????????? ???????????? ????????????")
            }
        }
    }






}








