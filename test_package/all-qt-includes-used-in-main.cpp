// Output of
// grep -R -e 'include\s*[<"]Q' | sed 's/.*\s*[<"]Q/Q/' | grep -v '.h"' | grep -v '.inl"' | grep -v '.git' | sed 's/>.*//' | grep -v '.i"' | grep -v -e '.h$' | sed 's/"//' | uniq | sort -u | awk '{ printf("#include <%s>\n", $1) }'

// deprecated, these will be removed in Qt6
#include <QAbstractMessageHandler>
#include <QDesktopWidget>
#include <QGL>
#include <QIconEngineV2>
#include <QXmlQuery>

// probably deprecated in Qt6, needs Qt5::WebEngine, in addition to Qt5::WebEngineCore and Qt5::WebEngineWidgets
#include <QtWebEngineVersion>

// this will need Core5Compat in Qt6
#include <QLinkedList>

// all headers required
#include <QAbstractButton>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAbstractListModel>

#include <QAbstractNativeEventFilter>
#include <QAbstractScrollArea>
#include <QAbstractTableModel>
#include <QAction>
#include <QActionGroup>
#include <QApplication>
#if defined(_WIN32)
#include <QAxBindable>
#include <QAxFactory>
#endif
#include <QBitmap>
#include <QBoxLayout>
#include <QBuffer>
#include <QButtonGroup>
#include <QByteArray>
#include <QChar>
#include <QCheckBox>
#include <QClipboard>
#include <QCloseEvent>
#include <QColor>
#include <QColorDialog>
#include <QComboBox>
#include <QCommandLineOption>
#include <QCommandLineParser>
#include <QCommonStyle>
#include <QContextMenuEvent>
#include <QCoreApplication>
#include <QCursor>
#include <QDataStream>
#include <QDataWidgetMapper>
#include <QDate>
#include <QDateTime>
#include <QDebug>
#include <QDesktopServices>
#include <QDialog>
#include <QDialogButtonBox>
#include <QDir>
#include <QDirIterator>
#include <QDockWidget>
#include <QDomAttr>
#include <QDomDocument>
#include <QDomElement>
#include <QDomNode>
#include <QDomNodeList>
#include <QDomText>
#include <QDoubleSpinBox>
#include <QDoubleValidator>
#include <QDrag>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QElapsedTimer>
#include <QEvent>
#include <QEventLoop>
#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <QFileInfoList>
#include <QFileOpenEvent>
#include <QFileSystemWatcher>
#include <QFlags>
#include <QFont>
#include <QFontDatabase>
#include <QFontDialog>
#include <QFontInfo>
#include <QFontMetrics>
#include <QFormLayout>
#include <QFrame>
#include <QFuture>
#include <QFutureWatcher>
#include <QGesture>
#include <QGestureEvent>
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QGridLayout>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QHelpEvent>
#include <QHideEvent>
#include <QHostAddress>
#include <QHttpMultiPart>
#include <QIODevice>
#include <QIcon>
#include <QIconEngine>
#include <QImage>
#include <QImageWriter>
#include <QInputDialog>
#include <QIntValidator>
#include <QItemDelegate>
#include <QItemEditorFactory>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonValue>
#include <QKeyEvent>
#include <QLabel>
#include <QLayout>
#include <QLibrary>
#include <QLineEdit>
#include <QList>
#include <QListView>
#include <QListWidget>
#include <QListWidgetItem>
#include <QLocale>
#include <QLockFile>
#include <QMainWindow>
#include <QMap>
#include <QMapIterator>
#include <QMenu>
#include <QMenuBar>
#include <QMessageBox>
#include <QMetaObject>
#include <QMetaType>
#include <QMimeData>
#include <QModelIndex>
#include <QMouseEvent>
#include <QMovie>
#include <QMultiMap>
#include <QMutex>
#include <QMutexLocker>
#include <QNetworkAccessManager>
#include <QNetworkProxy>
#include <QNetworkProxyFactory>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QObject>
#include <QOpenGLContext>
#include <QOpenGLFunctions>
#include <QOpenGLWindow>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPair>
#include <QPalette>
#include <QPanGesture>
#include <QPen>
#include <QPinchGesture>
#include <QPixmap>
#include <QPlainTextEdit>
#include <QPluginLoader>
#include <QPoint>
#include <QPointer>
#include <QPolygon>
#include <QPrintDialog>
#include <QPrinter>
#include <QProcess>
#include <QProcessEnvironment>
#include <QProgressBar>
#include <QProgressDialog>
#include <QProxyStyle>
#include <QPushButton>
#include <QRadioButton>
#include <QRect>
#include <QRectF>
#include <QRegExp>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QResizeEvent>
#include <QRunnable>
#include <QScopedArrayPointer>
#include <QScopedPointer>
#include <QScrollArea>
#include <QScrollBar>
#include <QSemaphore>
#include <QSet>
#include <QSettings>
#include <QSharedPointer>
#include <QShowEvent>
#include <QSignalMapper>
#include <QSignalSpy>
#include <QSize>
#include <QSizeGrip>
#include <QSizePolicy>
#include <QSlider>
#include <QSortFilterProxyModel>
#include <QSpacerItem>
#include <QSpinBox>
#include <QSplashScreen>
#include <QSplitter>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QSslError>
#include <QStack>
#include <QStackedWidget>
#include <QStandardItem>
#include <QStandardItemEditorCreator>
#include <QStandardItemModel>
#include <QStandardPaths>
#include <QStatusBar>
#include <QString>
#include <QStringBuilder>
#include <QStringList>
#include <QStringListModel>
#include <QStyle>
#include <QStyleFactory>
#include <QStyleOption>
#include <QStyleOptionButton>
#include <QStylePainter>
#include <QStyledItemDelegate>
#include <QSvgGenerator>
#include <QSyntaxHighlighter>
#include <QSysInfo>
#include <QTabBar>
#include <QTabWidget>
#include <QTableView>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QTableWidgetSelectionRange>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTemporaryDir>
#include <QTemporaryFile>
#include <QTest>
#include <QTextBlock>
#include <QTextBrowser>
#include <QTextCodec>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextEdit>
#include <QTextStream>
#include <QTextTable>
#include <QThread>
#include <QThreadPool>
#include <QThreadStorage>
#include <QTime>
#include <QTimer>
#include <QToolBar>
#include <QToolBox>
#include <QToolButton>
#include <QToolTip>
#include <QTransform>
#include <QTranslator>
#include <QTreeView>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QTreeWidgetItemIterator>
#include <QUdpSocket>
#include <QUrl>
#include <QUuid>
#include <QVBoxLayout>
#include <QValidator>
#include <QVariant>
#include <QVariantList>
#include <QVector>
#include <QWebEngineSettings>
#include <QWebEngineView>
#include <QWhatsThis>
#include <QWidget>
#include <QWizard>
#include <QWizardPage>
#include <QXmlDefaultHandler>
#include <QXmlSimpleReader>
#include <QXmlStreamAttributes>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include <Qt>
#include <QtAlgorithms>
#include <QtConcurrentMap>
#include <QtConcurrentRun>
#include <QtCore>
#include <QtCore/QDateTime>
#include <QtCore/QString>
#include <QtCore/QUuid>
#include <QtGlobal>
#include <QtGui>
#include <QtMessageHandler>
#include <QtPlugin>
#include <QtWidgets>
#include <QtXml>
#include <QtXml/QDomDocument>
#include <QtXml/QDomElement>
