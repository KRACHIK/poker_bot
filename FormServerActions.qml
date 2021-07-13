import QtQuick 2.9
import QtQuick.Window 2.2

import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2


ApplicationWindow {
    id: idformServerActions

    title: qsTr("Это должен выполнить чит сервер")

    width: 480;  height: 180; visible: true



    Rectangle{
        border.color: "black"

        x: 16;  y: 34;  width: 421; height: 36


        Text {
            id: name
            x: 0
            y: -31
            text: qsTr("  ДЕЙСТВИЕ КОТОРОЕ ДОЛЖНО БЫТЬ ВЫПОЛНЕННО ЧИТ-СЕРВЕРОМ\nНо он пока не готов и придется самому нажимать на кнопки")
        }

        RowLayout {
            id: layout_1
            anchors.fill: parent
            anchors.rightMargin: 0
            anchors.bottomMargin: -2
            anchors.leftMargin: 0
            anchors.topMargin: 1

            Button {
                text: "Избавиться от этих плохих карт"

                onClicked: { FormCheatServerAction.clearPlayingCards()  }
            }

            Button {
                text: "Повысить ставку"
                onClicked: {
                    FormCheatServerAction.upStavkaForThisPlayer(0, textFieldStavka.text)
                }
            }

            TextField{
                id: textFieldStavka
            }
        }

    }

    Button {
        x: 16;  y: 143
        text: "Перерисовать игровой стол"
        onClicked: {
             FormRenderInfo.updateForm()
        }
    }

}


/*##^##
Designer {
    D{i:0;formeditorZoom:1.25}
}
##^##*/
