#include "comment.h"

Comment::Comment(QObject *parent) :
    Interactable(parent)
{

}

QString Comment::bodyExcerpt() const
{
    return m_bodyExcerpt;
}

QDateTime Comment::createdAt() const
{
    return m_createdAt;
}

QString Comment::createdAtTimeSpan() const
{
    return m_createdAtTimeSpan;
}

QDateTime Comment::lastEditAt() const
{
    return m_lastEditAt;
}

void Comment::setBodyExcerpt(const QString &excerpt)
{
    if (m_bodyExcerpt == excerpt)
        return;

    m_bodyExcerpt = excerpt;
    emit bodyExcerptChanged(m_bodyExcerpt);
}

void Comment::setCreatedAt(const QDateTime &createdAt)
{
    if (m_createdAt == createdAt)
        return;

    m_createdAt = createdAt;
    emit createdAtChanged(m_createdAt);
}

void Comment::setCreatedAtTimeSpan(QString createdAtTimeSpan)
{
    if (m_createdAtTimeSpan == createdAtTimeSpan)
        return;

    m_createdAtTimeSpan = createdAtTimeSpan;
    emit createdAtTimeSpanChanged(m_createdAtTimeSpan);
}

void Comment::setLastEditAt(const QDateTime &lastEditAt)
{
    if (m_lastEditAt == lastEditAt)
        return;

    m_lastEditAt = lastEditAt;
    emit lastEditAtChanged(m_lastEditAt);
}
