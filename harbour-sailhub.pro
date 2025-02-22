# VERSION
VERSION = 0.1.2
DEFINES += APP_VERSION=\\\"$$VERSION\\\"

# The name of your application
TARGET = harbour-sailhub
DEFINES += APP_TARGET=\\\"$$TARGET\\\"

QT += dbus

CONFIG += link_pkgconfig sailfishapp
PKGCONFIG += nemonotifications-qt5

include(extern/sailfishos-utils/compressor/compressor.pri)

LIBS += -L../../lib -lkeepalive

SOURCES += src/harbour-sailhub.cpp \
    src/api/apiinterface.cpp \
    src/api/datautils.cpp \
    src/api/downloader.cpp \
    src/api/graphqlconnector.cpp \
    src/api/keys.cpp \
    src/api/mutations.cpp \
    src/api/queryvars.cpp \
    src/api/restapiconnector.cpp \
    src/dbus/dbusadaptor.cpp \
    src/dbus/dbusinterface.cpp \
    src/entities/comment.cpp \
    src/entities/commit.cpp \
    src/entities/discussion.cpp \
    src/entities/discussioncategory.cpp \
    src/entities/discussioncomment.cpp \
    src/entities/file.cpp \
    src/entities/fundinglink.cpp \
    src/entities/gist.cpp \
    src/entities/interactable.cpp \
    src/entities/issue.cpp \
    src/entities/label.cpp \
    src/entities/license.cpp \
    src/entities/node.cpp \
    src/entities/notificationobject.cpp \
    src/entities/organization.cpp \
    src/entities/owner.cpp \
    src/entities/profilestatus.cpp \
    src/entities/pullrequest.cpp \
    src/entities/release.cpp \
    src/entities/releaseasset.cpp \
    src/entities/repo.cpp \
    src/entities/user.cpp \
    src/models/basemodel.cpp \
    src/models/commentsmodel.cpp \
    src/models/commitsmodel.cpp \
    src/models/discussioncategoriesmodel.cpp \
    src/models/discussioncommentsmodel.cpp \
    src/models/discussionsmodel.cpp \
    src/models/emojimodel.cpp \
    src/models/fundinglinksmodel.cpp \
    src/models/gistsmodel.cpp \
    src/models/issuesmodel.cpp \
    src/models/labelsmodel.cpp \
    src/models/notificationsmodel.cpp \
    src/models/organizationsmodel.cpp \
    src/models/paginationmodel.cpp \
    src/models/pullrequestsmodel.cpp \
    src/models/reactionsmodel.cpp \
    src/models/releaseassetsmodel.cpp \
    src/models/releasesmodel.cpp \
    src/models/reposmodel.cpp \
    src/models/treemodel.cpp \
    src/models/treesortfiltermodel.cpp \
    src/models/usersmodel.cpp \
    src/qml/networkaccessmanagerfactory.cpp \
    src/sailhub.cpp

DISTFILES += qml/harbour-sailhub.qml \
    qml/SailHubStyles.qml \
    qml/components/AuthorItem.qml \
    qml/components/CommentItem \
    qml/components/CommentItem.qml \
    qml/components/CounterItem.qml \
    qml/components/DiscussionCommentItem.qml \
    qml/components/FilesChangedItem.qml \
    qml/components/IconLabel.qml \
    qml/components/IconRelatedItem.qml \
    qml/components/InfoItem.qml \
    qml/components/IssueCommentItem.qml \
    qml/components/LockReasonPill \
    qml/components/MarkdownLabel.qml \
    qml/components/Pill.qml \
    qml/components/ProfileStatusItem.qml \
    qml/components/ReactionGridItem.qml \
    qml/components/ReactionLabel.qml \
    qml/components/ReactionsItem.qml \
    qml/components/RelatedItem.qml \
    qml/components/RepoFlagsItem.qml \
    qml/components/StarMenuItem.qml \
    qml/cover/CoverPage.qml \
    qml/delegates/AssetListDelegate.qml \
    qml/delegates/CommentListDelegate.qml \
    qml/delegates/CommitListDelegate.qml \
    qml/delegates/DiscussionCategoryListDelegate.qml \
    qml/delegates/DiscussionListDelegate.qml \
    qml/delegates/GistListDelegate.qml \
    qml/delegates/IssueListDelegate.qml \
    qml/delegates/LabelListDelegate.qml \
    qml/delegates/NotificationListDelegate.qml \
    qml/delegates/OrganizationListDelegate.qml \
    qml/delegates/PullRequestListDelegate.qml \
    qml/delegates/ReleaseListDelegate.qml \
    qml/delegates/RepoListDelegate.qml \
    qml/delegates/TreeListDelegate.qml \
    qml/delegates/UserListDelegate.qml \
    qml/dialogs/AssignUserDialog.qml \
    qml/dialogs/EditCommentDialog.qml \
    qml/dialogs/EditDiscussionDialog.qml \
    qml/dialogs/EditIssueDialog.qml \
    qml/dialogs/ReactionDialog.qml \
    qml/dialogs/SelectBranchDialog.qml \
    qml/dialogs/SelectDiscussionCategoryDialog.qml \
    qml/dialogs/SelectEmojiDialog.qml \
    qml/dialogs/SelectSubscriptionDialog.qml \
    qml/dialogs/SortSelectionDialog.qml \
    qml/js/stringhelper.js \
    qml/pages/AddStarPage.qml \
    qml/pages/AssigneesListPage.qml \
    qml/pages/CommentPage \
    qml/pages/CommitPage.qml \
    qml/pages/CommitTreeListPage.qml \
    qml/pages/CommitsListPage.qml \
    qml/pages/DiscussionCommentPage.qml \
    qml/pages/DiscussionPage.qml \
    qml/pages/DiscussionsListPage.qml \
    qml/pages/FundingLinksListPage.qml \
    qml/pages/GistsListPage.qml \
    qml/pages/ImageViewerPage.qml \
    qml/pages/IssuePage.qml \
    qml/pages/IssueSelectionPage.qml \
    qml/pages/IssuesListPage.qml \
    qml/pages/LabelsListPage.qml \
    qml/pages/MarkdownViewerPage.qml \
    qml/pages/NotificationsListPage.qml \
    qml/pages/OrganizationPage.qml \
    qml/pages/OrganizationsListPage.qml \
    qml/pages/OverviewPage.qml \
    qml/pages/ProfileStatusPage.qml \
    qml/pages/PullRequestPage.qml \
    qml/pages/PullRequestsListPage.qml \
    qml/pages/PullRequestsSelectionPage.qml \
    qml/pages/ReleaseAssetsListPage.qml \
    qml/pages/ReleasePage.qml \
    qml/pages/ReleasesListPage.qml \
    qml/pages/RepoPage.qml \
    qml/pages/ReposListPage.qml \
    qml/pages/SearchOrganizationPage.qml \
    qml/pages/SearchRepositoryPage.qml \
    qml/pages/SearchSelectionPage.qml \
    qml/pages/SearchUserPage.qml \
    qml/pages/TextFileViewerPage.qml \
    qml/pages/TreeListPage.qml \
    qml/pages/UserPage.qml \
    qml/pages/UserPage.qml \
    qml/pages/UsersListPage.qml \
    qml/pages/settings/SettingsAuthenticationPage.qml \
    qml/pages/settings/SettingsNotificationPage.qml \
    qml/pages/settings/SettingsPage.qml \
    qml/pages/settings/SettingsPaginationPage.qml \
    qml/pages/wizard/WizardFinalPage.qml \
    qml/pages/wizard/WizardIntroPage.qml \
    qml/pages/wizard/WizardTokenPage.qml \
    qml/qmldir \
    qml/tools/LinkHelper.qml \
    qml/tools/MarkdownParser.qml \
    rpm/harbour-sailhub.changes \
    rpm/harbour-sailhub.changes.run.in \
    rpm/harbour-sailhub.spec \
    rpm/harbour-sailhub.yaml \
    translations/*.ts \
    harbour-sailhub.desktop

SAILFISHAPP_ICONS = 86x86 108x108 128x128 172x172 512x512

CONFIG += sailfishapp_i18n

TRANSLATIONS += \
    translations/harbour-sailhub-de.ts \
    translations/harbour-sailhub-fr.ts \
    translations/harbour-sailhub-pl.ts \
    translations/harbour-sailhub-zh_CN.ts

RESOURCES += \
    ressources.qrc

HEADERS += \
    src/api/apiinterface.h \
    src/api/datautils.h \
    src/api/downloader.h \
    src/api/graphqlconnector.h \
    src/api/graphqlquery.h \
    src/api/keys.h \
    src/api/mutations.h \
    src/api/queries.h \
    src/api/query_items.h \
    src/api/queryvars.h \
    src/api/ratelimit.h \
    src/api/restapiconnector.h \
    src/dbus/dbusadaptor.h \
    src/dbus/dbusinterface.h \
    src/entities/comment.h \
    src/entities/commit.h \
    src/entities/discussion.h \
    src/entities/discussioncategory.h \
    src/entities/discussioncomment.h \
    src/entities/file.h \
    src/entities/fundinglink.h \
    src/entities/gist.h \
    src/entities/interactable.h \
    src/entities/issue.h \
    src/entities/label.h \
    src/entities/language.h \
    src/entities/license.h \
    src/entities/node.h \
    src/entities/notificationobject.h \
    src/entities/organization.h \
    src/entities/owner.h \
    src/entities/profilestatus.h \
    src/entities/pullrequest.h \
    src/entities/reaction.h \
    src/entities/release.h \
    src/entities/releaseasset.h \
    src/entities/repo.h \
    src/entities/treeitem.h \
    src/entities/user.h \
    src/entities/viewer.h \
    src/enums/enums.h \
    src/enums/gitsignaturestate \
    src/enums/issuestate.h \
    src/enums/lockreason.h \
    src/enums/mergestatestatus.h \
    src/enums/pullrequestmergemethod.h \
    src/enums/pullrequeststate.h \
    src/enums/repositorylockreason.h \
    src/enums/repositorypermission.h \
    src/enums/subscriptionstate.h \
    src/models/basemodel.h \
    src/models/commentsmodel.h \
    src/models/commitsmodel.h \
    src/models/discussioncategoriesmodel.h \
    src/models/discussioncommentsmodel.h \
    src/models/discussionsmodel.h \
    src/models/emojimodel.h \
    src/models/fundinglinksmodel.h \
    src/models/gistsmodel.h \
    src/models/issuesmodel.h \
    src/models/labelsmodel.h \
    src/models/notificationsmodel.h \
    src/models/organizationsmodel.h \
    src/models/paginationmodel.h \
    src/models/pullrequestsmodel.h \
    src/models/reactionsmodel.h \
    src/models/releaseassetsmodel.h \
    src/models/releasesmodel.h \
    src/models/reposmodel.h \
    src/models/treemodel.h \
    src/models/treesortfiltermodel.h \
    src/models/usersmodel.h \
    src/qml/networkaccessmanagerfactory.h \
    src/sailhub.h

twemoji.files = data/twemoji/*
twemoji.path = $$INSTALL_ROOT/usr/share/harbour-sailhub/twemoji

INSTALLS += twemoji

openUrl.files = harbour-sailhub-open-url.desktop
openUrl.path = $$INSTALL_ROOT/usr/share/applications

INSTALLS += openUrl
