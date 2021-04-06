#ifndef ISSUESMODEL_H
#define ISSUESMODEL_H

#include "paginationmodel.h"

#include "src/entities/issue.h"

class IssuesModel : public PaginationModel
{
    Q_OBJECT

public:
    enum IssueRoles {
        ClosedRole          = Qt::UserRole + 1,
        CommentCountRole,
        CreatedAtRole,
        NodeIdRole,
        NumberRole,
        RepositoryRole,
        TimeSpanRole,
        TitleRole,
        StateRole
    };
    Q_ENUM(IssueRoles)

    explicit IssuesModel(QObject *parent = nullptr);

    void addIssue(const IssueListItem &issue);
    void addIssues(const QList<IssueListItem> &issues);
    void setIssues(const QList<IssueListItem> &issues);

private:
    QList<IssueListItem> m_issues;

    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    QHash<int, QByteArray> roleNames() const override;

    // PaginationModel interface
public:
    void clear() override;
};

#endif // ISSUESMODEL_H
