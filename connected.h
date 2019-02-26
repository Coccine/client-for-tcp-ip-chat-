#ifndef CONNECTED_H
#define CONNECTED_H

#include <QTcpSocket>
#include <QDebug>


class Connected : public QTcpSocket
{
    Q_OBJECT
public:
    explicit Connected();
public:
    QTcpSocket* socket;
    QByteArray Data;
public slots:
    void ConnectionToIP(QString IP);
    void slotSockReady();
    void slotSockDisk();
public:
    void getServerIPForConnected();
    void getServerSignalForCreate2world();
private:
    QString IPForConnect;
    QByteArray sIP;
};

#endif // CONNECTED_H
