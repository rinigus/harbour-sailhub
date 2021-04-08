#ifndef QUERIES_H
#define QUERIES_H

#include <QString>

#include "query_items.h"

// ------------------------------------------------------------------------------------------------------------------
// QUERIES
// ------------------------------------------------------------------------------------------------------------------

// GET ISSUE
static const QString SAILHUB_QUERY_GET_ISSUE =
        QStringLiteral("query($nodeId: ID!) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    node(id: $nodeId) {"
                       "        ... on Issue {"
                       "            id"
                       "            author {"
                       "                avatarUrl"
                       "                login"
                       "            }"
                       "            comments {"
                       "                totalCount"
                       "            }"
                       "            title"
                       "            state"
                       "        }"
                       "    }"
                       "    "
                       "}").simplified();

static const QString SAILHUB_QUERY_GET_ISSUE_COMMENTS =
        QStringLiteral("query($nodeId: ID!, $itemCount: Int = 20, $itemCursor: String = null) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    node(id: $nodeId) {"
                       "        ... on Issue {"
                       "            id"
                       "            comments(first: $itemCount, after: $itemCursor) {"
                       "                nodes {"
                       "                    %1"
                       "                }"
                       "                totalCount"
                       "                %2"
                       "            }"
                       "        }"
                       "    }"
                       "    "
                       "}").arg(SAILHUB_QUERY_ITEM_COMMMENT, SAILHUB_QUERY_ITEM_PAGE_INFO).simplified();


// GET ORGANIZATION PROFILE
static const QString SAILHUB_QUERY_GET_ORGANIZATION =
        QStringLiteral("query($nodeId: ID!) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    node(id: $nodeId) {"
                       "        ... on Organization {"
                       "            %1"
                       "        }"
                       "    }"
                       "}").arg(SAILHUB_QUERY_ITEM_ORGANIZATION).simplified();

// GET ORGANIZATION MEMBERS
static const QString SAILHUB_QUERY_GET_ORGANIZATION_MEMBERS =
        QStringLiteral("query($nodeId: ID!, $itemCount: Int = 20, $itemCursor: String = null) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    node(id: $nodeId,) {"
                       "        ... on Organization {"
                       "            id"
                       "            membersWithRole(first: $itemCount, after: $itemCursor) {"
                       "                nodes {"
                       "                    %1"
                       "                }"
                       "                totalCount"
                       "                %2"
                       "            }"
                       "        }"
                       "    }"
                       "}").arg(SAILHUB_QUERY_ITEM_USER_LIST_ITEM, SAILHUB_QUERY_ITEM_PAGE_INFO).simplified();

// GET LOGIN INFO OF AUTHENTICATED USER
static const QString SAILHUB_QUERY_GET_VIEWER_PROFILE =
        QStringLiteral("query {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    viewer {"
                       "        %1"
                       "    }"
                       "}").arg(SAILHUB_QUERY_ITEM_USER).simplified();

// GET REPOSITORY
static const QString SAILHUB_QUERY_GET_REPOSITORY =
        QStringLiteral("query($nodeId: ID!) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    node(id: $nodeId) {"
                       "        ... on Repository {"
                       "            id"
                       "            defaultBranchRef {"
                       "                id"
                       "                name"
                       "            }"
                       "            description"
                       "            forkCount"
                       "            homepageUrl"
                       "            isPrivate"
                       "            issues(states: [OPEN]) {"
                       "                totalCount"
                       "            }"
                       "            licenseInfo {"
                       "                spdxId"
                       "                url"
                       "            }"
                       "            mentionableUsers {"
                       "                totalCount"
                       "            }"
                       "            name"
                       "            owner {"
                       "                id"
                       "                login"
                       "                avatarUrl"
                       "            }"
                       "            projects {"
                       "                totalCount"
                       "            }"
                       "            pullRequests(states: [OPEN]) {"
                       "                totalCount"
                       "            }"
                       "            refs(first: 100, refPrefix: \"refs/heads/\") {"
                       "                totalCount"
                       "                nodes {"
                       "                    id"
                       "                    name"
                       "                }"
                       "            }"
                       "            releases {"
                       "                totalCount"
                       "            }"
                       "            stargazerCount"
                       "            viewerCanSubscribe"
                       "            viewerHasStarred"
                       "            viewerSubscription"
                       "            watchers {"
                       "                totalCount"
                       "            }"
//                       "            object(expression: \"master:README.md\") {"
//                       "                ... on Blob {"
//                       "                    text"
//                       "                }"
//                       "            }"
                       "        }"
                       "    }"
                       "}").simplified();

// GET REPOSITORY CONTRIBUTORS
static const QString SAILHUB_QUERY_GET_REPOSITORY_CONTRIBUTORS =
        QStringLiteral("query($nodeId: ID!, $itemCount: Int = 20, $itemCursor: String = null) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    node(id: $nodeId,) {"
                       "        ... on Repository {"
                       "            id"
                       "            mentionableUsers(first: $itemCount, after: $itemCursor) {"
                       "                nodes {"
                       "                    %1"
                       "                }"
                       "                totalCount"
                       "                %2"
                       "            }"
                       "        }"
                       "    }"
                       "}").arg(SAILHUB_QUERY_ITEM_USER_LIST_ITEM, SAILHUB_QUERY_ITEM_PAGE_INFO).simplified();

// GET REPOSITORY PULL REQUESTS
static const QString SAILHUB_QUERY_GET_REPOSITORY_FILE_CONTENT =
        QStringLiteral("query($nodeId: ID!, $branch: String!) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    node(id: $nodeId) {"
                       "        ... on Repository {"
                       "            id"
                       "            object(expression: $branch) {"
                       "                ... on Blob {"
                       "                    byteSize"
                       "                    isBinary"
                       "                    text"
                       "                }"
                       "            }"
                       "        }"
                       "    }"
                       "}").simplified();

// GET REPOSITORY FILES
static const QString SAILHUB_QUERY_GET_REPOSITORY_FILES =
        QStringLiteral("query($nodeId: ID!, $branch: String!, $path: String!) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    node(id: $nodeId) {"
                       "        ... on Repository {"
                       "            id"
                       "            ref(qualifiedName: $branch) {"
                       "                target {"
                       "                    ... on Commit {"
                       "                        file(path: $path) {"
                       "                            object {"
                       "                                ... on Tree {"
                       "                                    entries {"
                       "                                        extension"
                       "                                        name"
                       "                                        path"
                       "                                        type"
                       "                                        object {"
                       "                                            ... on Blob {"
                       "                                                isBinary"
                       "                                            }"
                       "                                        }"
                       "                                    }"
                       "                                }"
                       "                            }"
                       "                        }"
                       "                    }"
                       "                }"
                       "            }"
                       "        }"
                       "    }"
                       "}").simplified();

// GET REPOSITORY STARGAZERS
static const QString SAILHUB_QUERY_GET_REPOSITORY_STARGAZERS =
        QStringLiteral("query($nodeId: ID!, $itemCount: Int = 20, $itemCursor: String = null) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    node(id: $nodeId,) {"
                       "        ... on Repository {"
                       "            id"
                       "            stargazers(first: $itemCount, after: $itemCursor) {"
                       "                nodes {"
                       "                    %1"
                       "                }"
                       "                totalCount"
                       "                %2"
                       "            }"
                       "        }"
                       "    }"
                       "}").arg(SAILHUB_QUERY_ITEM_USER_LIST_ITEM, SAILHUB_QUERY_ITEM_PAGE_INFO).simplified();

// GET REPOSITORY WATCHERS
static const QString SAILHUB_QUERY_GET_REPOSITORY_WATCHERS =
        QStringLiteral("query($nodeId: ID!, $itemCount: Int = 20, $itemCursor: String = null) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    node(id: $nodeId,) {"
                       "        ... on Repository {"
                       "            id"
                       "            watchers(first: $itemCount, after: $itemCursor) {"
                       "                nodes {"
                       "                    %1"
                       "                }"
                       "                totalCount"
                       "                %2"
                       "            }"
                       "        }"
                       "    }"
                       "}").arg(SAILHUB_QUERY_ITEM_USER_LIST_ITEM, SAILHUB_QUERY_ITEM_PAGE_INFO).simplified();

// GET USER PROFILE
static const QString SAILHUB_QUERY_GET_USER =
        QStringLiteral("query($nodeId: ID!) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    node(id: $nodeId) {"
                       "        ... on User {"
                       "            %1"
                       "        }"
                       "    }"
                       "}").arg(SAILHUB_QUERY_ITEM_USER).simplified();

// GET USER FOLLOWERS
static const QString SAILHUB_QUERY_GET_USER_FOLLOWERS =
        QStringLiteral("query($nodeId: ID!, $itemCount: Int = 20, $itemCursor: String = null) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    node(id: $nodeId,) {"
                       "        ... on User {"
                       "            id"
                       "            login"
                       "            followers(first: $itemCount, after: $itemCursor) {"
                       "                nodes {"
                       "                    %1"
                       "                }"
                       "                totalCount"
                       "                %2"
                       "            }"
                       "        }"
                       "    }"
                       "}").arg(SAILHUB_QUERY_ITEM_USER_LIST_ITEM, SAILHUB_QUERY_ITEM_PAGE_INFO).simplified();

// GET USER FOLLOWERS
static const QString SAILHUB_QUERY_GET_USER_FOLLOWING =
        QStringLiteral("query($nodeId: ID!, $itemCount: Int = 20, $itemCursor: String = null) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    node(id: $nodeId,) {"
                       "        ... on User {"
                       "            id"
                       "            login"
                       "            following(first: $itemCount, after: $itemCursor) {"
                       "                nodes {"
                       "                    %1"
                       "                }"
                       "                totalCount"
                       "                %2"
                       "            }"
                       "        }"
                       "    }"
                       "}").arg(SAILHUB_QUERY_ITEM_USER_LIST_ITEM, SAILHUB_QUERY_ITEM_PAGE_INFO).simplified();


// GET USER ORGANIZATIONS
static const QString SAILHUB_QUERY_GET_USER_ORGANIZATIONS =
        QStringLiteral("query($nodeId: ID!, $itemCount: Int = 20, $itemCursor: String = null) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    node(id: $nodeId,) {"
                       "        ... on User {"
                       "            id"
                       "            login"
                       "            organizations(first: $itemCount, after: $itemCursor) {"
                       "                nodes {"
                       "                    %1"
                       "                }"
                       "                totalCount"
                       "                %2"
                       "            }"
                       "        }"
                       "    }"
                       "}").arg(SAILHUB_QUERY_ITEM_ORGANIZATION_LIST_ITEM, SAILHUB_QUERY_ITEM_PAGE_INFO).simplified();



// ------------------------------------------------------------------------------------------------------------------
// QUERIES SEARCH
// ------------------------------------------------------------------------------------------------------------------

static const QString SAILHUB_QUERY_SEARCH_ORGANIZATION =
        QStringLiteral("query searchOrgs($queryString: String!, $itemCount: Int = 20, $itemCursor: String = null) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    search(query: $queryString, type: USER, first: $itemCount, after: $itemCursor) {"
                       "        %1"
                       "        userCount"
                       "        nodes {"
                       "            ... on Organization {"
                       "                %2"
                       "            }"
                       "        }"
                       "    }"
                       "}").arg(SAILHUB_QUERY_ITEM_PAGE_INFO, SAILHUB_QUERY_ITEM_ORGANIZATION_LIST_ITEM).simplified();

static const QString SAILHUB_QUERY_SEARCH_REPOSITORY =
        QStringLiteral("query searchRepos($queryString: String!, $itemCount: Int = 20, $itemCursor: String = null) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    search(query: $queryString, type: REPOSITORY, first: $itemCount, after: $itemCursor) {"
                       "        %1"
                       "        repositoryCount"
                       "        nodes {"
                       "            ... on Repository {"
                       "                %2"
                       "            }"
                       "        }"
                       "    }"
                       "}").arg(SAILHUB_QUERY_ITEM_PAGE_INFO, SAILHUB_QUERY_ITEM_REPO_LIST_ITEM).simplified();

static const QString SAILHUB_QUERY_SEARCH_USER =
        QStringLiteral("query searchUsers($queryString: String!, $itemCount: Int = 20, $itemCursor: String = null) {"
                       "    rateLimit {"
                       "        remaining"
                       "        resetAt"
                       "    }"
                       "    search(query: $queryString, type: USER, first: $itemCount, after: $itemCursor) {"
                       "        %1"
                       "        userCount"
                       "        nodes {"
                       "            ... on User {"
                       "                %2"
                       "            }"
                       "        }"
                       "    }"
                       "}").arg(SAILHUB_QUERY_ITEM_PAGE_INFO, SAILHUB_QUERY_ITEM_USER_LIST_ITEM).simplified();



#endif // QUERIES_H
