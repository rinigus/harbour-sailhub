#ifndef REPO_H
#define REPO_H

#include "node.h"

#include <QDateTime>
#include <QJsonObject>

#include "language.h"
#include "user.h"

#include "src/enums/subscriptionstate.h"
#include "src/entities/license.h"
#include "src/entities/owner.h"

struct RepoListItem {
    QDateTime createdAt;
    QString description;
    Language language;
    bool isPrivate{false};
    QString name;
    QString nodeId;
    QString owner;
    QDateTime pushedAt;
    quint32 stargazerCount{0};
    QDateTime updatedAt;
};

class Repo : public Node
{
    Q_OBJECT

    Q_PROPERTY(QStringList branches READ branches WRITE setBranches NOTIFY branchesChanged)
    Q_PROPERTY(quint32 contributorCount READ contributorCount WRITE setContributorCount NOTIFY contributorCountChanged)
    Q_PROPERTY(QString defaultBranch READ defaultBranch WRITE setDefaultBranch NOTIFY defaultBranchChanged)
    Q_PROPERTY(QString description READ description WRITE setDescription NOTIFY descriptionChanged)
    Q_PROPERTY(quint32 discussionCount READ discussionCount WRITE setDiscussionCount NOTIFY discussionCountChanged)
    Q_PROPERTY(quint8 features READ features WRITE setFeatures NOTIFY featuresChanged)
    Q_PROPERTY(quint32 forkCount READ forkCount WRITE setForkCount NOTIFY forkCountChanged)
    Q_PROPERTY(bool hasFundingLinks READ hasFundingLinks WRITE setHasFundingLinks NOTIFY hasFundingLinksChanged)
    Q_PROPERTY(QString homepageUrl READ homepageUrl WRITE setHomepageUrl NOTIFY homepageUrlChanged)
    Q_PROPERTY(bool isArchived READ isArchived WRITE setIsArchived NOTIFY isArchivedChanged)
    Q_PROPERTY(bool isDisabled READ isDisabled WRITE setIsDisabled NOTIFY isDisabledChanged)
    Q_PROPERTY(bool isEmpty READ isEmpty WRITE setIsEmpty NOTIFY isEmptyChanged)
    Q_PROPERTY(bool isFork READ isFork WRITE setIsFork NOTIFY isForkChanged)
    Q_PROPERTY(bool isInOrganization READ isInOrganization WRITE setIsInOrganization NOTIFY isInOrganizationChanged)
    Q_PROPERTY(bool isLocked READ isLocked WRITE setIsLocked NOTIFY isLockedChanged)
    Q_PROPERTY(bool isMirror READ isMirror WRITE setIsMirror NOTIFY isMirrorChanged)
    Q_PROPERTY(bool isPrivate READ isPrivate WRITE setIsPrivate NOTIFY isPrivateChanged)
    Q_PROPERTY(bool isTemplate READ isTemplate WRITE setIsTemplate NOTIFY isTemplateChanged)
    Q_PROPERTY(quint32 issueCount READ issuesCount WRITE setIssuesCount NOTIFY issuesCountChanged)
    Q_PROPERTY(License* license READ license WRITE setLicense NOTIFY licenseChanged)
    Q_PROPERTY(Owner* owner READ owner WRITE setOwner NOTIFY ownerChanged)
    Q_PROPERTY(quint32 projects READ projects WRITE setProjects NOTIFY projectsChanged)
    Q_PROPERTY(quint32 pullRequestCount READ pullRequestsCount WRITE setPullRequestsCount NOTIFY pullRequestsCountChanged)
    Q_PROPERTY(quint32 releaseCount READ releaseCount WRITE setReleaseCount NOTIFY releaseCountChanged)
    Q_PROPERTY(quint32 stargazerCount READ stargazerCount WRITE setStargazerCount NOTIFY stargazerCountChanged)
    Q_PROPERTY(bool viewerCanSubscribe READ viewerCanSubscribe WRITE setViewerCanSubscribe NOTIFY viewerCanSubscribeChanged)
    Q_PROPERTY(bool viewerHasStarred READ viewerHasStarred WRITE setViewerHasStarred NOTIFY viewerHasStarredChanged)
    Q_PROPERTY(quint8 viewerPermission READ viewerPermission WRITE setViewerPermission NOTIFY viewerPermissionChanged)
    Q_PROPERTY(quint8 viewerSubscription READ viewerSubscription WRITE setViewerSubscription NOTIFY viewerSubscriptionChanged)
    Q_PROPERTY(quint32 vulnerabilityAlertCount READ vulnerabilityAlertCount WRITE setVulnerabilityAlertCount NOTIFY vulnerabilityAlertCountChanged)
    Q_PROPERTY(quint32 watcherCount READ watcherCount WRITE setWatcherCount NOTIFY watcherCountChanged)

public:
    enum RepoFeature {
        FeatureNone         = 0x00,
        FeatureIssues       = 0x01,
        FeatureProjects     = 0x02,
        FeatureWiki         = 0x04
    };
    Q_ENUM(RepoFeature)
    Q_DECLARE_FLAGS(RepoFeatures, RepoFeature)

    enum RepoPermission {
        PermissionNone,
        PermissionAdmin,
        PermissionMaintain,
        PermissionRead,
        PermissionTriage,
        PermissionWrite
    };
    Q_ENUM(RepoPermission)

    enum RepoSubscription {
        SubscriptionIgnored,
        Subscribed,
        Unsubscribed
    };
    Q_ENUM(RepoSubscription)

    enum RepoType {
        Undefined,
        Fork,
        Organization,
        Search,
        Starred,
        User,
        Watched
    };
    Q_ENUM(RepoType)

    explicit Repo(QObject *parent = nullptr);

    QStringList branches() const;
    quint32 contributorCount() const;
    QString defaultBranch() const;
    QString description() const;
    quint32 discussionCount() const;
    quint8 features() const;
    quint32 forkCount() const;
    bool hasFundingLinks() const;
    QString homepageUrl() const;
    bool isArchived() const;
    bool isDisabled() const;
    bool isEmpty() const;
    bool isFork() const;
    bool isInOrganization() const;
    bool isLocked() const;
    bool isMirror() const;
    bool isPrivate() const;
    bool isTemplate() const;
    quint32 issuesCount() const;
    License *license() const;
    Owner *owner() const;
    quint32 projects() const;
    quint32 pullRequestsCount() const;
    quint32 releaseCount() const;
    quint32 stargazerCount() const;
    bool viewerCanSubscribe() const;
    bool viewerHasStarred() const;
    quint8 viewerPermission() const;
    quint8 viewerSubscription() const;
    quint32 vulnerabilityAlertCount() const;
    quint32 watcherCount() const;

signals:
    void branchesChanged(const QStringList &branches);
    void contributorCountChanged(quint32 count);
    void defaultBranchChanged(const QString &branch);
    void descriptionChanged(const QString &description);
    void discussionCountChanged(quint32 count);
    void featuresChanged(quint8 features);
    void forkCountChanged(quint32 count);
    void hasFundingLinksChanged(bool hasFundingLinks);
    void homepageUrlChanged(const QString &url);
    void isArchivedChanged(bool isArchived);
    void isDisabledChanged(bool isDisabled);
    void isEmptyChanged(bool isEmpty);
    void isForkChanged(bool isFork);
    void isInOrganizationChanged(bool isInOrganization);
    void isLockedChanged(bool isLocked);
    void isMirrorChanged(bool isMirror);
    void isPrivateChanged(bool isPrivate);
    void isTemplateChanged(bool isTemplate);
    void issuesCountChanged(quint32 count);
    void licenseChanged(License *license);
    void ownerChanged(Owner *owner);
    void projectsChanged(quint32 projects);
    void pullRequestsCountChanged(quint32 count);
    void releaseCountChanged(quint32 releaseCount);
    void stargazerCountChanged(quint32 count);
    void viewerCanSubscribeChanged(bool subscribable);
    void viewerHasStarredChanged(bool starred);
    void viewerPermissionChanged(quint8 permission);
    void viewerSubscriptionChanged(quint8 state);
    void vulnerabilityAlertCountChanged(quint32 count);
    void watcherCountChanged(quint32 count);

public slots:
    void setBranches(const QStringList &branches);
    void setContributorCount(quint32 count);
    void setDefaultBranch(const QString &branch);
    void setDescription(const QString &description);
    void setDiscussionCount(quint32 count);
    void setFeatures(quint8 features);
    void setForkCount(quint32 count);
    void setHasFundingLinks(bool hasFundingLinks);
    void setHomepageUrl(const QString &url);
    void setIsArchived(bool isArchived);
    void setIsDisabled(bool isDisabled);
    void setIsEmpty(bool isEmpty);
    void setIsFork(bool isFork);
    void setIsInOrganization(bool isInOrganization);
    void setIsLocked(bool isLocked);
    void setIsMirror(bool isMirror);
    void setIsPrivate(bool isPrivate);
    void setIsTemplate(bool isTemplate);
    void setIssuesCount(quint32 count);
    void setLicense(License *license);
    void setOwner(Owner *owner);
    void setProjects(quint32 projects);
    void setPullRequestsCount(quint32 count);
    void setReleaseCount(quint32 releaseCount);
    void setStargazerCount(quint32 count);
    void setViewerCanSubscribe(bool subscribable);
    void setViewerHasStarred(bool starred);
    void setViewerPermission(quint8 permission);
    void setViewerSubscription(quint8 state);
    void setVulnerabilityAlertCount(quint32 count);
    void setWatcherCount(quint32 count);

private:
    QStringList m_branches;
    quint32 m_contributorCount{0};
    QString m_defaultBranch;
    QString m_description;
    quint32 m_discussionCount{0};
    quint8 m_features{FeatureNone};
    quint32 m_forkCount{0};
    bool m_hasFundingLinks{false};
    QString m_homepageUrl;
    bool m_isArchived{false};
    bool m_isDisabled{false};
    bool m_isEmpty{false};
    bool m_isFork{false};
    bool m_isInOrganization{false};
    bool m_isLocked{false};
    bool m_isMirror{false};
    bool m_isPrivate{false};
    bool m_isTemplate{false};
    quint32 m_issueCount{0};
    License *m_license;
    Owner *m_owner;
    quint32 m_projects{0};
    quint32 m_pullRequestCount{0};
    quint32 m_stargazerCount{0};
    quint32 m_releaseCount{0};
    bool m_viewerCanSubscribe{false};
    bool m_viewerHasStarred{false};
    quint8 m_viewerPermission{PermissionNone};
    quint8 m_viewerSubscription{SubscriptionState::Ignored};
    quint32 m_vulnerabilityAlertCount{0};
    quint32 m_watcherCount{0};

};
Q_DECLARE_OPERATORS_FOR_FLAGS(Repo::RepoFeatures)

#endif // REPO_H
