#ifndef QUERY_ITEMS_H
#define QUERY_ITEMS_H

#include <QString>

// ------------------------------------------------------------------------------------------------------------------
// QUERY ITEMS
// ------------------------------------------------------------------------------------------------------------------
static const QString SAILHUB_QUERY_ITEM_COMMMENT =
        QStringLiteral("    id"
                       "    author {"
                       "        avatarUrl"
                       "        login"
                       "    }"
                       "    bodyHTML"
                       "    createdAt"
                       "    lastEditedAt"
                       "    viewerCanDelete"
                       "    viewerCanReact"
                       "    viewerCanUpdate"
                       "    viewerDidAuthor").simplified();

static const QString SAILHUB_QUERY_ITEM_ISSUE_LIST_ITEM =
        QStringLiteral("    id"
                       "    closed"
                       "    comments {"
                       "        totalCount"
                       "    }"
                       "    createdAt"
                       "    number"
                       "    repository {"
                       "        nameWithOwner"
                       "    }"
                       "    state"
                       "    title").simplified();

static const QString SAILHUB_QUERY_ITEM_PAGE_INFO =
        QStringLiteral("    pageInfo {"
                       "        hasNextPage"
                       "        endCursor"
                       "    }").simplified();

static const QString SAILHUB_QUERY_ITEM_REPO_LIST_ITEM =
        QStringLiteral("    id"
                       "    isPrivate"
                       "    shortDescriptionHTML"
                       "    primaryLanguage {"
                       "        color"
                       "        name"
                       "    }"
                       "    name"
                       "    owner {"
                       "        login"
                       "    }"
                       "    stargazerCount").simplified();

static const QString SAILHUB_QUERY_ITEM_USER =
        QStringLiteral("    id"
                       "    avatarUrl"
                       "    bio"
                       "    company"
                       "    followers {"
                       "        totalCount"
                       "    }"
                       "    following {"
                       "        totalCount"
                       "    }"
                       "    location"
                       "    login"
                       "    isViewer"
                       "    name"
                       "    organizations {"
                       "        totalCount"
                       "    }"
                       "    repositories {"
                       "        totalCount"
                       "    }"
                       "    starredRepositories {"
                       "    totalCount"
                       "    }"
                       "    status {"
                       "        emoji"
                       "        message"
                       "    }"
                       "    twitterUsername"
                       "    viewerIsFollowing"
                       "    websiteUrl").simplified();

static const QString SAILHUB_QUERY_ITEM_USER_LIST_ITEM =
        QStringLiteral("    id"
                       "    avatarUrl"
                       "    login"
                       "    name").simplified();




#endif // QUERY_ITEMS_H
