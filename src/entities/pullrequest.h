#ifndef PULLREQUEST_H
#define PULLREQUEST_H

#include "issue.h"

#include <QDateTime>

struct PullRequestListItem : public NodeListItem {
    quint32 commentCount{0};
    QDateTime createdAt;
    QString createdAtTimeSpan;
    quint32 number{0};
    QString repository;
    quint8 state;
    QString timeSpan;
    QString title;
    QDateTime updatedAt;
    QString updatedAtTimeSpan;
};

class PullRequest : public Issue
{
    Q_OBJECT



public:
    enum PullRequestState {
        StateUnknown    = 0x0,
        StateOpen       = 0x1,
        StateClosed     = 0x2,
        StateMerged     = 0x4
    };
    Q_ENUM(PullRequestState)
    Q_DECLARE_FLAGS(PullRequestStates, PullRequestState)

    enum PullRequestType {
        Undefined,
        Assigned,
        CreatedBy,
        Mentioned,
        Repo,
        User
    };
    Q_ENUM(PullRequestType)

    explicit PullRequest(QObject *parent = nullptr);
};
Q_DECLARE_OPERATORS_FOR_FLAGS(PullRequest::PullRequestStates)

#endif // PULLREQUEST_H
