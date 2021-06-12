import QtQuick 2.9
import QtQuick.Window 2.2

import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2


ApplicationWindow {
    id: playerStat
    width: 400
    height: 180
    visible: true
    Text {
        x: 10; y: 9
        text: qsTr("1. Действие Инициализация игрового стола. (Написать имя игрока нажать на кнопку confirm)")
    }

    Text {
        id: name1
        x: 18; y: 46
        text: qsTr("1. Действие Инициализация игрового стола")
    }

    Text {
        id: text_top20
        x: 18; y: 153
        text: qsTr("1. QML Not INIT 2 ")
    }


    Text {
        id: text_UTG_SH
        x: 18; y: 125
        text: qsTr("1. QML Not INIT ")
    }





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


}
