#include "connected.h"

Connected::Connected()
{
    socket = new QTcpSocket(this);
    socket->connectToHost("localhost", 3244);
        connect(socket, SIGNAL(readyRead()), this , SLOT(slotSockReady()));
        connect(socket, SIGNAL(disconnected()), this, SLOT(slotSockDisk()));

}



void Connected::slotSockDisk()
{
    socket->deleteLater();
}

void Connected::slotSockReady()
{
    socket->waitForConnected(500);
    Data = socket->readAll();
    qDebug() << Data << endl;
}

void Connected::ConnectionToIP(QString IP)
{
    this->IPForConnect = IP;
    getServerSignalForCreate2world();
}

void Connected::getServerSignalForCreate2world()
{
    sIP = "create2worldplease";
    sIP += IPForConnect;
    socket->write(sIP);
}
