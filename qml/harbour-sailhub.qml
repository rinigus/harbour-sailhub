import QtQuick 2.0
import Sailfish.Silica 1.0
import Nemo.DBus 2.0

import "pages"

import org.nubecula.harbour.sailhub 1.0

ApplicationWindow
{
    initialPage: Component { OverviewPage { } }
    cover: Qt.resolvedUrl("cover/CoverPage.qml")
    allowedOrientations: defaultAllowedOrientations

    Component.onCompleted: SailHub.initialize()

    DBusAdaptor {
        service: "harbour.sailhub.service"
        iface: "harbour.sailhub.service"
        path: "/harbour/sailhub/service"
        xml: '\
              <interface name="harbour.sailhub.service">
                <method name="addStar">
                    <arg name="username" type="s" direction="in">
                        <doc:doc>
                            <doc:summary>
                                GitHub username
                            </doc:summary>
                        </doc:doc>
                    </arg>
                    <arg name="reponame" type="s" direction="in">
                        <doc:doc>
                            <doc:summary>
                                GitHub repository name
                            </doc:summary>
                        </doc:doc>
                    </arg>
                </method>
                <method name="open">
                </method>
                <method name="token">
                </method>
              </interface>'

        function addStar(username, reponame) {
            __silica_applicationwindow_instance.activate()
            pageStack.push(Qt.resolvedUrl("pages/AddStarPage.qml"), { reponame: reponame, username: username })
        }

        function open() {
            __silica_applicationwindow_instance.activate()
            pageStack.push(Qt.resolvedUrl("pages/NotificationsListPage.qml"))
        }

        function token() {
            __silica_applicationwindow_instance.activate()
            pageStack.push(Qt.resolvedUrl("pages/settings/SettingsAuthenticationPage.qml"))
        }


    }
}
