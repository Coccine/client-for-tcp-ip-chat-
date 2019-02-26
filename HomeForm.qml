import QtQuick 2.9
import QtQuick.Controls 2.2

Page {
    width: 350
    height: 400

    title: qsTr("Chats")
            TextInput {
                id: textInput
                objectName: "getIP"
                x: 31
                y: 0
                width: 213
                height: 32
                font.pixelSize: 12
                padding: 12
                color: "blue"
            }

            Text {
                id: element
                x: 0
                y: 0
                width: 30
                height: 32
                text: qsTr("ID")
                font.pixelSize: 12
            }

            Button {

                id: connectButton
                signal connectToIP(string kkk)
                objectName: "connectionButton"
                x: 244
                y: 0
                height: 32
                text: qsTr("Соедениться")
                onClicked: connectToIP(textInput.text)

            }

            TextArea {
                id: textArea
                objectName: "outputMessages"
                x: 0
                y: 38
                width: 350
                height: 286
            }

            TextEdit {
                id: textEdit
                objectName: "messageLine"
                x: 0
                y: 365
                width: 283
                height: 39
                text: qsTr("Input message")
                font.pixelSize: 12
            }

            Button {
                id: sendMesButton
                objectName: "sendMessageBtn"
                signal sandMessage()
                x: 284
                y: 365
                width: 72
                height: 39
                text: qsTr("Send")
                onClicked: sandMessage()
            }

        }
