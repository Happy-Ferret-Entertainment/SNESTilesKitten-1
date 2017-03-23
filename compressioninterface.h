#ifndef COMPRESSIONINTERFACE_H
#define COMPRESSIONINTERFACE_H

#include <qplugin.h>
#include <QString>
#include <QMap>

#include "compressioninfo.h"

class CompressionInterface {
  public:
    virtual ~CompressionInterface() {}
    virtual QList<CompressionInfo> compressionList() = 0;
    virtual char* compress(QString name, const char* data, unsigned int start) = 0;
    virtual char* unCompress(QString name, const char* data, unsigned int start, unsigned int *uncompressedSize) = 0;
};

Q_DECLARE_INTERFACE(CompressionInterface, "fr.nyo.SNESTilesKitten.CompressionInterface")

#endif // COMPRESSIONINTERFACE_H
