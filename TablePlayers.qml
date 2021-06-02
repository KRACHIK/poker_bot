import QtQuick 2.9
import QtQuick.Window 2.2

 import QtQuick.Controls 1.4
 //import QtQuick.Layouts 1.2

 import QtQuick.Controls 2.2 // ok
import QtQuick.Layouts 1.3
import QtQuick.Dialogs 1.1



Window
{
    id: profile_manager
    signal signalExit
    property int number: 0
    property int button_text_pixel_size: 13

    visible: true


    property int styleFlag
    property color color_button_pressed_no: '#f3f1f0'
    property color color_button_pressed_yes: '#f3f1f0'
    property color color_button_mouse_event_yes: '#f3f1f0'
    property color color_button_border: '#f3f1f0'
    property color color_text_in_button: '#000'
    property color color_listView_background: '#f3f1f0'


    height:        920
    maximumHeight: 920
    minimumHeight: 920
    width:         988
    minimumWidth:  988
    maximumWidth:  988


/*
    Описать игрока
ТЕКСТ_ИМЯ_ИГРОКА
ТЕКСТ_СТАВКА_ИГРОКА
ТЕКСТ_ВРЕМЯ_ХОДА
ИД_КАРТИНКИ_МАРКЕР1 BB
ИД_КАРТИНКИ_МАРКЕР2 ВТРОЙ
ВИДЕМОСТЬ_КНОПКИ_СБРОС_КАРТ
ВИДЕМОСТЬ_КНОПКИ_ПОВЫСИТЬ_СТАВКУ
*/





    Connections
    {
        target: FormUserInput
        onEventInitStol:
        {
            buttonEndInit.visible = false
        }

        onClearTable :
        {
            listModelCircle.clear()
        }


        onAddLinesToTable://  QString  str_PLAYR_NAME
                        // ,QString str_STAVKA
                        // ,QString str_TIME_STEP
                        // ,QString str_ID_IMG_MARKER_1
                        // ,QString str_ID_IMG_MARKER_2
                        // ,int     int_INDEX
                        // ,int     int_VISIBILITY_PUSHBUTTON_SBROW_MAPS
                        // ,int     int_VISIBILITY_BUTTONS_INCREASE_BID
        {
            listModelCircle.append( {
                                 m_INDEX : int_INDEX
                                ,m_VISIBILITY_PUSHBUTTON_SBROW_MAPS : int_VISIBILITY_PUSHBUTTON_SBROW_MAPS
                                ,m_VISIBILITY_BUTTONS_INCREASE_BID : int_VISIBILITY_BUTTONS_INCREASE_BID
                                ,m_PLAYR_NAME : str_PLAYR_NAME
                                ,m_STAVKA : str_STAVKA
                                ,m_TIME_STEP : str_TIME_STEP
                                ,m_ID_IMG_MARKER_1 : str_ID_IMG_MARKER_1
                                ,m_ID_IMG_MARKER_2 : str_ID_IMG_MARKER_2
                                })


        }
    }


    Button {
        id: button_DBG
        x: 286
        y: 6
        width: 59
        height: 22
        Text {
            text: qsTr("DBG ADD")
            x: 60 ; y: 8; color: color_text_in_button;  anchors.verticalCenter: parent.verticalCenter ; font.pixelSize: button_text_pixel_size;  horizontalAlignment: Text.AlignLeft;  verticalAlignment: Text.AlignVCenter; anchors.horizontalCenter: parent.horizontalCenter; anchors.horizontalCenterOffset: 0
        }
        onClicked: {
            FormUserInput.dbg();


        }
    }

    Button {
        id: button_DBG1
        x: 349
        y: 42
        width: 344
        height: 22
        text: qsTr("перерисовать модель стола по инфе от impl_server")

        onClicked: {
            FormUserInput.updateGUI()
        }
    }

    Text
    {
        id: textIndex
        text: ""
        anchors.fill: parent; anchors.rightMargin: 273;         anchors.bottomMargin: 198;  anchors.leftMargin: 214; anchors.topMargin: 88;  verticalAlignment: Text.AlignVCenter;  horizontalAlignment: Text.AlignHCenter ;font.pixelSize:   button_text_pixel_size
    }



    Button {

        id: buttonEndInit
        x: 11 ; y: 6 ; width: 264 ;height: 22


        Text
        {
            text: qsTr("Заверщить инициализацию имен игроков")
            x: 60; y: 8; color: color_text_in_button ; font.pixelSize:  button_text_pixel_size; anchors.horizontalCenter:  parent.horizontalCenter; anchors.verticalCenter: parent.verticalCenter; anchors.horizontalCenterOffset: 0 ; horizontalAlignment: Text.AlignLeft ; verticalAlignment: Text.AlignVCenter
        }


        onClicked: {

            FormUserInput.initEnd()
        }
    }

    Item {
        id: container
        x: 173

        y: 141
        width: 600
        height: 600

        //anchors.centerIn: parent

        Rectangle {
            anchors.fill: parent
            //radius: width /2
            anchors.rightMargin: -131
            anchors.bottomMargin: -130
            anchors.leftMargin: 80
            anchors.topMargin: 34
            //color: "gray"
            border.color: "red"
        }

        PathView {
            x: 109
            y: 132
            anchors.rightMargin: 118
            anchors.bottomMargin: 229
            anchors.leftMargin: 118
            anchors.topMargin: 46
            anchors.fill: parent



            model: ListModel {
                id: listModelCircle

                ListElement {
                    m_INDEX : 0
                    m_VISIBILITY_PUSHBUTTON_SBROW_MAPS : 1
                    m_VISIBILITY_BUTTONS_INCREASE_BID : 1
                    m_PLAYR_NAME      : "KRACHIK"
                    m_STAVKA          : "2.99$"
                    m_TIME_STEP       : "7Sec"
                    m_ID_IMG_MARKER_1 : "BB"
                    m_ID_IMG_MARKER_2 : "Wood"
                }

                ListElement {
                    m_INDEX : 1
                    m_VISIBILITY_PUSHBUTTON_SBROW_MAPS : 1
                    m_VISIBILITY_BUTTONS_INCREASE_BID : 1
                    m_PLAYR_NAME      : "JOB"
                    m_STAVKA          : "2.99$"
                    m_TIME_STEP       : "7Sec"
                    m_ID_IMG_MARKER_1 : "BB"
                    m_ID_IMG_MARKER_2 : "Wood"
                }

                ListElement {
                    m_INDEX : 2
                    m_VISIBILITY_PUSHBUTTON_SBROW_MAPS : 1
                    m_VISIBILITY_BUTTONS_INCREASE_BID : 1
                    m_PLAYR_NAME      : "TARA"
                    m_STAVKA          : "2.99$"
                    m_TIME_STEP       : "7Sec"
                    m_ID_IMG_MARKER_1 : "BB"
                    m_ID_IMG_MARKER_2 : "Wood"
                }
                ListElement {
                    m_INDEX : 3
                    m_VISIBILITY_PUSHBUTTON_SBROW_MAPS : 1
                    m_VISIBILITY_BUTTONS_INCREASE_BID : 1
                    m_PLAYR_NAME      : "NIKITCLASS"
                    m_STAVKA          : "2.99$"
                    m_TIME_STEP       : "7Sec"
                    m_ID_IMG_MARKER_1 : "BB"
                    m_ID_IMG_MARKER_2 : "Wood"
                }
                ListElement {
                    m_INDEX : 4
                    m_VISIBILITY_PUSHBUTTON_SBROW_MAPS : 1
                    m_VISIBILITY_BUTTONS_INCREASE_BID : 1
                    m_PLAYR_NAME      : "SERJ"
                    m_STAVKA          : "2.99$"
                    m_TIME_STEP       : "7Sec"
                    m_ID_IMG_MARKER_1 : "BB"
                    m_ID_IMG_MARKER_2 : "Wood"
                }

                ListElement {
                    m_INDEX : 5
                    m_VISIBILITY_PUSHBUTTON_SBROW_MAPS : 1
                    m_VISIBILITY_BUTTONS_INCREASE_BID : 1
                    m_PLAYR_NAME      : "CAO"
                    m_STAVKA          : "2.99$"
                    m_TIME_STEP       : "7Sec"
                    m_ID_IMG_MARKER_1 : "BB"
                    m_ID_IMG_MARKER_2 : "Wood"
                }



            }


            /// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
              delegate:
            /// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
            RadioDelegate
            {
                id: control1Circle
                onClicked:
                {
                    console.log("++++++++++++++++++++++++++++++++++++++++++++++++++++")
                    //button_catch_cards.visible = false

                    FormUserInput.selectedIndex(index)
                }


                y: 8
                width:   170
                height:  text_subjecttext_subject.y - text_typetext_type.y +  text_subjecttext_subject.height + 19

                background: Rectangle
                {
                    id : faka
                    color: color_listView_background  //color: "#dbd7d7"
                    border.color: "#383838"
                    border.width: 1


                    height:  text_subjecttext_subject.y - text_typetext_type.y +  text_subjecttext_subject.height + 19

                    Button
                    {
                        text: "Избавиться от карт"
                        id: button_catch_cards
                        x: 1; y: 17; width: 114; height: 15
                        visible: control1Circle.checked ? true : false
                        onClicked:
                        {
                            console.log("Избавиться от карт")
                            //FormUserInput.setPositions(index)
                        }
                     //   visible: index == m_INDEX ?
                    }

                    Button
                    {
                        text: "Повысить ставку"
                        x: 1; y: 32; width: 114; height: 15
                        visible: control1Circle.checked ? true : false
                        onClicked:
                        {
                            console.log("Повысить ставку")
                        }
                    }

                    Button {
                        text: "Позиция на этом Player"
                        x: 1;  y: 2;  width: 142;  height: 15
                        onClicked:
                        {
                            console.log("Повысить ставку")
                            FormUserInput.setPositions(index)
                        }
                        visible: control1Circle.checked ? true : false
                    }

                    Button
                    {
                        text: " Указатель на этом игроке"
                        visible: control1Circle.checked ? true : false
                        x: 1; y: 46; width: 114; height: 15
                        onClicked:
                        {
                            console.log("Указатель на этом игроке")
                            //FormUserInput.setPositions(certificateIndex)
                        }
                        //visible: index == m_INDEX ?  true : false
                    }


                    Button
                    {
                        id: buttonConfirmInit
                        visible: control1Circle.checked ? true : false
                        x: 1; y: 61; width: 83; height: 14
                        text: "Confiirm Init"

                        onClicked:
                        {
                            console.log("Имя сохранено")
                            FormUserInput.confiirmInit(m_INDEX, textFieldplayerName.text )

                            // Прячем кнопку подтверждения своего имени
                            buttonConfirmInit.visible = false
                            // Прячем текстбок для ввода своего имени
                            textFieldplayerName.visible = false
                        }

                        //visible: index == m_INDEX ?  true : false
                    }

                    Text
                    {
                        id: text_typetext_type
                        x: 116; y: 0
                        color: color_text_in_button
                        visible: true
                    }




                    Text {
                        visible: true; x: 28;  y: 116; color: "red"
                        text: m_PLAYR_NAME
                    }

                    Text {
                        visible: true; x: 27;  y: 133; color: "red"
                        text: m_STAVKA
                    }
                    Text {
                        visible: true; x: 25;  y: 149; color: "red"
                        text: m_ID_IMG_MARKER_1
                    }
                    Text {
                        visible: true; x: 25;  y: 99; color: "red"
                        text: m_ID_IMG_MARKER_2
                    }
                    // --> int  not draw Text {
                    // --> int  not draw     visible: true; x: 28;  y: 81; color: "red"
                    // --> int  not draw     text: m_INDEX
                    // --> int  not draw }
                    // --> int  not draw Text {
                    // --> int  not draw     visible: true; x: 26;  y: 185; color: "red"
                    // --> int  not draw     text: m_VISIBILITY_PUSHBUTTON_SBROW_MAPS
                    // --> int  not draw }
                    // --> int  not draw Text {
                    // --> int  not draw     visible: true; x: 25;  y: 168; color: "red"
                    // --> int  not draw     text: m_VISIBILITY_BUTTONS_INCREASE_BID
                    // --> int  not draw }






                    Text {
                        visible: false
                        id: text_certificate_indextext_certificate_index
                        text: "#certificateIndex#"
                        x: 39
                        y: 103

                        //color: "#ffffff"
                    }

                    Text{ //TextArea  {
                        x: 8
                        y: 221
                        id : text_subjecttext_subject
                        width: parent.width -45 //  width: 256
                        color: color_text_in_button
                        //text: subject1
                        wrapMode: Text.WrapAtWordBoundaryOrAnywhere
                        focus : false
                    }


                    TextField{
                        x: 86 ; y: 59; width: 60 ; height: 23
                        id: textFieldplayerName
                        visible: control1Circle.checked ? true : false
                    }



                }


                indicator: Rectangle
                {
                    x: control1Circle.leftPadding
                    y: parent.height / 2 - height / 2
                    color: control1Circle.checked ? "#0088FF" : "white"
                    radius: 15
                    border.color: "#0088ff"
                    implicitHeight: 15
                    implicitWidth: 15
                    Rectangle
                    {
                        x: parent.width / 2 - width / 2
                        y: parent.height / 2 - height / 2
                        width: 10
                        height: 10
                        color: "#ffffff"
                        radius: 5
                        visible: control1Circle.checked
                    }
                }



                contentItem: Text
                {
                    color: "#ffffff"
                    text: control1Circle.text
                    leftPadding: control1Circle.indicator.width + control1Circle.spacing
                    font: control1Circle.font
                    opacity: enabled ? 1.0 : 0.3
                    elide: Text.ElideRight
                    verticalAlignment: Text.AlignVCenter

                }



            }






              path: Path {
                      startX: 150*2.13; startY: 25*2.13

                      PathArc {
                          x: 150*2.13; y: 275*2.13
                          radiusX: 125*2.13; radiusY: 125*2.13
                          direction: PathArc.Clockwise

                      }
                      PathArc {
                          x: 150*2.13; y: 25*2.13
                          radiusX: 125*2.13; radiusY: 125*2.13
                          direction: PathArc.Clockwise

                      }
                  }

        }
    }







}



/*##^##
Designer {
    D{i:0;formeditorZoom:0.6600000262260437}
}
##^##*/