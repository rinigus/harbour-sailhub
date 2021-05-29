#ifndef KEYS_H
#define KEYS_H

#include <QString>

struct ApiKey {
    static const QString ABBREVIATED_OID;
    static const QString ACTIVE_LOCK_REASON;
    static const QString ADD_STAR;
    static const QString ADDITIONS;
    static const QString ANSWER_CHOSEN_AT;
    static const QString ANSWER_CHOSEN_BY;
    static const QString ASSIGNABLE_ID;
    static const QString ASSIGNABLE_USERS;
    static const QString ASSIGNEE_IDS;
    static const QString ASSIGNEES;
    static const QString AUTHOR;
    static const QString AUTHORED_BY_COMMITTER;
    static const QString AVATAR_URL;
    static const QString BASE_REF_NAME;
    static const QString BIO;
    static const QString BODY;
    static const QString BODY_HTML;
    static const QString BODY_TEXT;
    static const QString CAN_BE_REBASED;
    static const QString CATEGORY;
    static const QString CATEGORY_ID;
    static const QString CHANGE_USER_STATUS;
    static const QString CHANGED_FILES;
    static const QString CLIENT_MUTATION_ID;
    static const QString CLOSED;
    static const QString COLLABORATORS;
    static const QString COLOR;
    static const QString COMMENT_ID;
    static const QString COMMENTS;
    static const QString COMMIT;
    static const QString COMMITS;
    static const QString COMMITTER;
    static const QString COMPANY;
    static const QString CONTENT;
    static const QString CONTENT_TYPE;
    static const QString CREATED_AT;
    static const QString CREATED_VIA_EMAIL;
    static const QString DATA;
    static const QString DATE;
    static const QString DEFAULT_BRANCH_REF;
    static const QString DELETED_AT;
    static const QString DELETIONS;
    static const QString DESCRIPTION;
    static const QString DISCUSSION;
    static const QString DISCUSSION_CATEGORIES;
    static const QString DISCUSSION_ID;
    static const QString DISCUSSIONS;
    static const QString DOWNLOAD_COUNT;
    static const QString DOWNLOAD_URL;
    static const QString EDGES;
    static const QString EDITOR;
    static const QString EMAIL;
    static const QString EMOJI;
    static const QString EMOJI_HTML;
    static const QString END_CURSOR;
    static const QString ENTRIES;
    static const QString EXPIRES_AT;
    static const QString EXTENSION;
    static const QString FILE;
    static const QString FILES;
    static const QString FOLLOWER_USER;
    static const QString FOLLOWERS;
    static const QString FOLLOWING;
    static const QString FORK_COUNT;
    static const QString FORKS;
    static const QString FUNDING_LINKS;
    static const QString GISTS;
    static const QString HAS_ISSUES_ENABLED;
    static const QString HAS_NEXT_PAGE;
    static const QString HAS_PROJECTS_ENABLED;
    static const QString HAS_WIKI_ENABLED;
    static const QString HEAD_REF_NAME;
    static const QString HOMEPAGE_URL;
    static const QString ID;
    static const QString INCLUDES_CREATED_EDIT;
    static const QString INDICATES_LIMITED_AVAILABILITY;
    static const QString IS_ANSWER;
    static const QString IS_ARCHIVED;
    static const QString IS_BINARY;
    static const QString IS_BLANK_ISSUES_ENABLED;
    static const QString IS_CROSS_REPOSITORY;
    static const QString IS_DISABLED;
    static const QString IS_DRAFT;
    static const QString IS_EMPTY;
    static const QString IS_FORK;
    static const QString IS_IN_ORGANIZATION;
    static const QString IS_LATEST;
    static const QString IS_LOCKED;
    static const QString IS_MINIMIZED;
    static const QString IS_MIRROR;
    static const QString IS_PRERELEASE;
    static const QString IS_PRIVATE;
    static const QString IS_PUBLIC;
    static const QString IS_SECURITY_POLICY_ENABLED;
    static const QString IS_TEMPLATE;
    static const QString IS_USER_CONFIGURATION_REPOSITORY;
    static const QString IS_VIEWER;
    static const QString ISSUE_ID;
    static const QString ISSUE;
    static const QString ISSUES;
    static const QString LABELS;
    static const QString LANGUAGES;
    static const QString LAST_EDITED_AT;
    static const QString LICENSE_INFO;
    static const QString LIMITED_AVAILABILITY;
    static const QString LOCATION;
    static const QString LOCK_LOCKABLE;
    static const QString LOCKABLE_ID;
    static const QString LOCKED;
    static const QString LOCKED_RECORD;
    static const QString LOCK_REASON;
    static const QString LOGIN;
    static const QString MAINTAINER_CAN_MODIFY;
    static const QString MEMBERS_WITH_ROLE;
    static const QString MENTIONABLE_USERS;
    static const QString MERGE_STATE_STATUS;
    static const QString MERGEABLE;
    static const QString MERGED;
    static const QString MERGED_AT;
    static const QString MERGEG_BY;
    static const QString MESSAGE;
    static const QString MESSAGE_HEADLINE;
    static const QString MINIMIZED_REASON;
    static const QString NAME;
    static const QString NAME_WITH_OWNER;
    static const QString NODE;
    static const QString NODES;
    static const QString NUMBER;
    static const QString OBJECT;
    static const QString ORGANIZATION;
    static const QString ORGANIZATION_ID;
    static const QString ORGANIZATIONS;
    static const QString OWNER;    
    static const QString PAGE_INFO;
    static const QString PARENT;
    static const QString PARTICIPANTS;
    static const QString PATH;
    static const QString PLATFORM;
    static const QString PRIMARY_LANGUAGE;
    static const QString PROJECTS;
    static const QString PUBLISHED_AT;
    static const QString PULL_REQUEST;
    static const QString PULL_REQUEST_ID;
    static const QString PULL_REQUESTS;
    static const QString PUSHED_AT;
    static const QString PUSHED_DATE;
    static const QString RATE_LIMIT;
    static const QString REACTION_GROUPS;
    static const QString REF;
    static const QString REFS;
    static const QString RELEASE_ASSETS;
    static const QString RELEASES;
    static const QString REMAINING;
    static const QString REMOVE_STAR;
    static const QString REPLIES;
    static const QString REPLY_TO;
    static const QString REPLY_TO_ID;
    static const QString REPOSITORIES;
    static const QString REPOSITORY_COUNT;
    static const QString REPOSITORY;
    static const QString REPOSITORY_ID;
    static const QString RESET_AT;
    static const QString SEARCH;
    static const QString SHORT_DESCRIPTION_HTML;
    static const QString SIZE;
    static const QString SPDX_ID;
    static const QString STARGAZER_COUNT;
    static const QString STARGAZERS;
    static const QString STARRABLE;
    static const QString STARRABLE_ID;
    static const QString STARRED_REPOSITORIES;
    static const QString STATE;
    static const QString STATUS;
    static const QString SUBJECT_ID;
    static const QString SUBSCRIBABLE;
    static const QString SUBSCRIBABLE_ID;
    static const QString TAG_COMMIT;
    static const QString TAG_NAME;
    static const QString TARGET;
    static const QString TEAMS;
    static const QString TEXT;
    static const QString TITLE;
    static const QString TOTAL_COUNT;
    static const QString TWITTER_USERNAME;
    static const QString TYPE;
    static const QString UNFOLLOW_USER;
    static const QString UNLOCK_LOCKABLE;
    static const QString UPDATED_AT;
    static const QString UPDATE_SUBSCRIPTION;
    static const QString URL;
    static const QString USER;
    static const QString USERS;
    static const QString USER_COUNT;
    static const QString USER_ID;
    static const QString VIEWER;
    static const QString VIEWER_CAN_ADMINISTER;
    static const QString VIEWER_CAN_APPLY_SUGGESTION;
    static const QString VIEWER_CAN_CREATE_PROJECTS;
    static const QString VIEWER_CAN_DELETE;
    static const QString VIEWER_CAN_DELETE_HEAD_REF;
    static const QString VIEWER_CAN_DISABLE_AUTO_MERGE;
    static const QString VIEWER_CAN_ENABLE_AUTO_MERGE;
    static const QString VIEWER_CAN_MARK_AS_ANSWER;
    static const QString VIEWER_CAN_MINIMIZE;
    static const QString VIEWER_CAN_REACT;
    static const QString VIEWER_CAN_SUBSCRIBE;
    static const QString VIEWER_CAN_UNMARK_AS_ANSWER;
    static const QString VIEWER_CAN_UPDATE;
    static const QString VIEWER_CAN_UPDATE_TOPICS;
    static const QString VIEWER_DID_AUTHOR;
    static const QString VIEWER_IS_MEMBER;
    static const QString VIEWER_IS_FOLLOWING;
    static const QString VIEWER_IS_SPONSORING;
    static const QString VIEWER_HAS_REACTED;
    static const QString VIEWER_HAS_STARRED;
    static const QString VIEWER_PERMISSION;
    static const QString VIEWER_SUBSCRIPTION;
    static const QString VULNERABILITY_ALERTS;
    static const QString WATCHERS;
    static const QString WEBSITE_URL;
};

struct RestApiKey {
    static const QString FULL_NAME;
    static const QString LAST_READ_AT;
    static const QString NODE_ID;
    static const QString REASON;
    static const QString SUBJECT;
    static const QString UNREAD;
    static const QString UPDATED_AT;

};

#endif // KEYS_H
