import QtQuick 2.0
import Sailfish.Silica 1.0
import QtGraphicalEffects 1.0

import org.nubecula.harbour.sailhub 1.0

import "../components/"

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
                source: model.state === PullRequest.StateMerged ?  "qrc:///icons/icon-m-merged" : "qrc:///icons/icon-m-pull-request"

                ColorOverlay {
                    anchors.fill: parent
                    source: parent
                    color: {
                        if (model.state === PullRequest.StateOpen)
                            return "#64DD17"

                        if (model.state === PullRequest.StateClosed)
                            return "#D50000"

                        if (model.state === PullRequest.StateMerged)
                            return "#D500F9"

                        return "#FFFFFF"
                    }
                }
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

                        text: model.sortRole === PullRequestsModel.UpdatedAtRole ? model.updatedAtTimeSpan : model.createdAtTimeSpan
                    }
                }

                Row {
                    width: parent.width
                    spacing: Theme.paddingSmall

                    Label {
                        width: parent.width - commentIcon.width - commentsLabel.width - 2*parent.spacing
                        wrapMode: Text.WrapAtWordBoundaryOrAnywhere
                        font.bold: true

                        text: model.title
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

                        text: model.commentCount
                    }
                }
            }
        }
    }
}
