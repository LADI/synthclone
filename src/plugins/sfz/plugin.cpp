#include "plugin.h"

Plugin::Plugin(QObject *parent):
    QObject(parent)
{
    // Empty
}

Plugin::~Plugin()
{
    // Empty
}

QByteArray
Plugin::getId() const
{
    return "com.googlecode.synthclone.plugins.hydrogen";
}

synthclone::Participant *
Plugin::getParticipant()
{
    return &participant;
}

Q_EXPORT_PLUGIN2(synthclone_hydrogen, Plugin);
