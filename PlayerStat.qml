import QtQuick 2.9
import QtQuick.Window 2.2

import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2


ApplicationWindow {
    id: playerStat

    title: qsTr("Статистика")

    width: 400;  height: 480; visible: true

 ///   modality: Qt.ApplicationHidden

    Connections
    {
        target: FormUserInput

        onSetText_top20 :{
            text_top20.text = str
        }
        onSetText_UTG_SH  :{
            text_UTG_SH.text = str
        }
    }


    Text {
        x: 10; y: 9
        text: qsTr("1. Действие Инициализация игрового стола. (Написать имя игрока нажать на кнопку confirm)")
    }

    Text {
        id: name1
        x: 10; y: 28
        text: qsTr("2. Действие <Указать на позицию D>")
    }

    Text {
        id: text_top20
        x: 10; y: 206

        text: qsTr("1. QML Not INIT 2 ")
    }


    Text {
        id: text_UTG_SH
        x: 10; y: 225
        text: qsTr("1. QML Not INIT ")
    }

    Rectangle {
        x: 1
        y: 123
        width:  playerStat.width
        height:  3
        color: "black"
    }

    TextField {
        x: 65 ; y: 159 ; width: 34 ; height: 20
        id : text_stavkaUpValue
        text: "2.5"
    }



    Text {
        id: name2
        x: 10
        y: 47
        text: qsTr("3. Действие <Указать на свою собственную позицию>")
    }

    Text {
        id: name3
        x: 10
        y: 66
        text: qsTr("4. Действие <Указать на свои собственные карты>")
    }

    Text {
        id: name4
        x: 10
        y: 84
        text: qsTr("5. Действие <отправить вычисления на сервер>")
    }

    Text {
        id: text_UTG_SH1
        x: 10 ;y: 132
        width: 384
        height: 39
        wrapMode:  Text.WordWrap
        text: qsTr("1. Если мои карты найдены в одной из 6 таблиц  BU_OPEN SB_OPEN MP_OPEN CO_OPEN BB_ISO UTG_SH то автоматически повысить ставку на значение:")
    }

    Button{
        x: 118
        y: 161
        width: 81
        height: 18
        text: "Применить"

        onClicked: FormUserInput.setValueStavkaUpAAfterFindPlayerCardInTable ( text_stavkaUpValue.text )

    }

    Button {
        x: 18
        y: 337

        text: "пока не используется"
    }


}
