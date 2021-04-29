import QtQuick 2.0
import Sailfish.Silica 1.0

import org.nubecula.harbour.sailhub 1.0

import "../components/"
import "../js/stringhelper.js" as StringHelper

ListItem {
    id: delegate
    width: parent.width
    contentHeight: delegateContent.height + 2*Theme.paddingMedium

    Column {
        id: delegateContent
        x: Theme.horizontalPageMargin
        width: parent.width - 2*x
        anchors.verticalCenter: parent.verticalCenter
        spacing: Theme.paddingSmall

        Row {
            width: parent.width
            spacing: Theme.paddingMedium

            Icon {
                id: delegateIcon
                anchors.top: parent.top
                source: model.closed ? "image://theme/icon-s-installed?00ff00" : "image://theme/icon-s-high-importance?#ff0000"
            }

            Column {
                width: parent.width - delegateIcon.width - parent.spacing

                Row {
                    width: parent.width
                    spacing: Theme.paddingSmall

                    Label {
                        anchors.verticalCenter: parent.verticalCenter
                        width: parent.width - timeSpanLabel.width - parent.spacing
                        wrapMode: Text.WrapAtWordBoundaryOrAnywhere
                        font.pixelSize: Theme.fontSizeTiny

                        text: model.repository + " #" + model.number
                    }

                    Label {
                        id: timeSpanLabel
                        anchors.verticalCenter: parent.verticalCenter
                        font.pixelSize: Theme.fontSizeSmall

                        text: model.sortRole === IssuesModel.UpdatedAtRole ? model.updatedAtTimeSpan : model.createdAtTimeSpan
                    }
                }

                Label {
                    width: parent.width
                    wrapMode: Text.WrapAtWordBoundaryOrAnywhere
                    font.bold: true

                    text: model.title
                }

                Item {
                    width: 1
                    height: parent.spacing
                }

                Row {
                    width: parent.width
                    spacing: Theme.paddingSmall

                    Icon {
                        id: dateIcon
                        anchors.verticalCenter: parent.verticalCenter
                        source: "image://theme/icon-s-date"
                    }

                    Label {
                        width: parent.width - dateIcon.width - commentIcon.width - commentsLabel.width - 3 * parent.spacing
                        anchors.verticalCenter: parent.verticalCenter
                        font.pixelSize: Theme.fontSizeTiny
                        color: pressed ? Theme.highlightColor : Theme.primaryColor

                        text: model.createdAt.toLocaleDateString(Qt.locale())
                    }

                    Icon {
                        id: commentIcon
                        anchors.verticalCenter: parent.verticalCenter
                        source: "image://theme/icon-s-chat"

                    }

                    Label {
                        id: commentsLabel
                        anchors.verticalCenter: commentIcon.verticalCenter
                        font.pixelSize: Theme.fontSizeSmall
                        color: pressed ? Theme.highlightColor : Theme.primaryColor

                        text: StringHelper.count(model.commentCount)
                    }
                }
            }
        }
    }
}
