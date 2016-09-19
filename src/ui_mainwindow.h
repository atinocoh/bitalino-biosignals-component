/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoboSignals
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabConnection;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QComboBox *macList;
    QPushButton *nuevaMac;
    QPushButton *connectionButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *connectionLabel;
    QLabel *label_2;
    QLabel *connectionIconLabel;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_2;
    QLabel *label_4;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBoxEmg;
    QComboBox *channelListEmg;
    QHBoxLayout *horizontalLayout_48;
    QCheckBox *checkBoxAccX;
    QComboBox *channelListAccX;
    QHBoxLayout *horizontalLayout_49;
    QCheckBox *checkBoxAccY;
    QComboBox *channelListAccY;
    QHBoxLayout *horizontalLayout_51;
    QCheckBox *checkBoxAccZ;
    QComboBox *channelListAccZ;
    QHBoxLayout *horizontalLayout_50;
    QCheckBox *checkBoxEcg;
    QComboBox *channelListEcg;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *startButton;
    QPushButton *stopButton;
    QFrame *line_4;
    QLabel *label_8;
    QComboBox *channelListCapture;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *startCapture;
    QPushButton *stopCapture;
    QFrame *line_5;
    QLabel *label_86;
    QHBoxLayout *horizontalLayout_40;
    QPushButton *startDebug;
    QPushButton *stopDebug;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_7;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *plotEmgPpal;
    QLabel *result;
    QLabel *label_3;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *plotAccXPpal;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *verticalLayoutWidget_15;
    QVBoxLayout *plotAccYPpal;
    QWidget *verticalLayoutWidget_16;
    QVBoxLayout *plotAccZPpal;
    QLabel *label_99;
    QLabel *label_100;
    QPushButton *masEscalaEmgPpal;
    QPushButton *menosEscalaEmgPpal;
    QLabel *label_65;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *plotEcgPpal;
    QWidget *tabEmgProcessor;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *plotEmgProcesado;
    QLabel *label_21;
    QLabel *resultEmgProcessor;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *plotEmgPicos;
    QLabel *label_30;
    QFrame *verticalFrame_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_23;
    QFrame *line_9;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_19;
    QComboBox *filterList;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *startButterworth;
    QPushButton *stopButterworth;
    QFrame *line_10;
    QLabel *label_25;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_5;
    QSpinBox *windowSize;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_31;
    QCheckBox *activateDownsample;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_32;
    QSpinBox *downsampleWindow;
    QLabel *label_33;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *startAverage;
    QPushButton *stopAverage;
    QFrame *line_11;
    QLabel *label_26;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_20;
    QSpinBox *envelopeWindow;
    QLabel *label_27;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_6;
    QDoubleSpinBox *minValue;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_8;
    QDoubleSpinBox *maxValue;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_3;
    QDoubleSpinBox *threshold;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_42;
    QPushButton *calibrationButtonEmg;
    QLabel *label_85;
    QSpinBox *calibrationTime;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *startDetection;
    QPushButton *stopDetection;
    QFrame *line_12;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_29;
    QLabel *label_22;
    QLabel *label_13;
    QLabel *peakDetected;
    QLCDNumber *peakCounter;
    QLabel *label_28;
    QPushButton *menosEscalaEmgProcesado;
    QPushButton *masEscalaEmgProcesado;
    QWidget *tabAccProcessor;
    QLabel *label_67;
    QLabel *label_68;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *plotAccXProcesado;
    QLabel *resultAcc;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *plotAccYProcesado;
    QLabel *label_76;
    QFrame *verticalFrame_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_34;
    QFrame *line_17;
    QLabel *label_42;
    QHBoxLayout *horizontalLayout_24;
    QCheckBox *checkBoxFilterAccX;
    QCheckBox *checkBoxFilterAccY;
    QCheckBox *checkBoxFilterAccZ;
    QFrame *line_13;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout_20;
    QComboBox *filterListAcc;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *startButterworthAcc;
    QPushButton *stopButterworthAcc;
    QFrame *line_14;
    QLabel *label_36;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_37;
    QSpacerItem *horizontalSpacer_7;
    QSpinBox *windowSizeAcc;
    QLabel *label_38;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_39;
    QCheckBox *activateDownsampleAcc;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_40;
    QSpinBox *downsampleWindowAcc;
    QLabel *label_41;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *startAverageAcc;
    QPushButton *stopAverageAcc;
    QFrame *line_15;
    QLabel *label_45;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_43;
    QDoubleSpinBox *thresholdValueX;
    QLabel *label_44;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_46;
    QDoubleSpinBox *thresholdValueY;
    QLabel *label_47;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_48;
    QDoubleSpinBox *thresholdValueZ;
    QLabel *label_49;
    QHBoxLayout *horizontalLayout_28;
    QPushButton *startDetectionAcc;
    QPushButton *stopDetectionAcc;
    QSpacerItem *verticalSpacer;
    QFrame *line_16;
    QLabel *label_51;
    QWidget *verticalLayoutWidget_11;
    QVBoxLayout *plotAccZProcesado;
    QLabel *label_69;
    QLabel *label_50;
    QLabel *ledAccX;
    QLabel *ledAccY;
    QLabel *label_52;
    QLabel *ledAccZ;
    QLabel *label_53;
    QWidget *tabEcgProcessor;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *plotEcgProcesado;
    QLabel *label_54;
    QFrame *verticalFrame_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_55;
    QFrame *line_18;
    QLabel *label_56;
    QHBoxLayout *horizontalLayout_29;
    QComboBox *filterListEcg;
    QHBoxLayout *horizontalLayout_30;
    QPushButton *startButterworthEcg;
    QPushButton *stopButterworthEcg;
    QFrame *line_19;
    QLabel *label_57;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_58;
    QSpacerItem *horizontalSpacer_9;
    QSpinBox *windowSizeEcg;
    QLabel *label_59;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_60;
    QCheckBox *activateDownsampleEcg;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_61;
    QSpinBox *downsampleWindowEcg;
    QLabel *label_62;
    QHBoxLayout *horizontalLayout_34;
    QPushButton *startAverageEcg;
    QPushButton *stopAverageEcg;
    QFrame *line_20;
    QLabel *label_64;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_70;
    QSpinBox *envelopeWindowEcg;
    QLabel *label_71;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_72;
    QSpacerItem *horizontalSpacer_10;
    QDoubleSpinBox *minValueEcg;
    QLabel *label_73;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_79;
    QSpacerItem *horizontalSpacer_11;
    QDoubleSpinBox *maxValueEcg;
    QLabel *label_80;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_74;
    QSpacerItem *horizontalSpacer_4;
    QDoubleSpinBox *thresholdEcg;
    QLabel *label_78;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_83;
    QSpinBox *intervaloEcg;
    QLabel *label_84;
    QHBoxLayout *horizontalLayout_35;
    QPushButton *startDetectionEcg;
    QPushButton *stopDetectionEcg;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_21;
    QLabel *label_75;
    QLCDNumber *lcdBpm;
    QLabel *label_63;
    QLabel *resultEcg;
    QLabel *label_77;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *plotEcgPicos;
    QLabel *label_66;
    QLabel *peakDetectedEcg;
    QLabel *label_81;
    QLabel *label_82;
    QLCDNumber *peakCounterEcg;

    void setupUi(QMainWindow *RoboSignals)
    {
        if (RoboSignals->objectName().isEmpty())
            RoboSignals->setObjectName(QString::fromUtf8("RoboSignals"));
        RoboSignals->resize(1049, 747);
        RoboSignals->setBaseSize(QSize(800, 600));
        RoboSignals->setStyleSheet(QString::fromUtf8("selection-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(RoboSignals);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1031, 731));
        tabConnection = new QWidget();
        tabConnection->setObjectName(QString::fromUtf8("tabConnection"));
        verticalFrame = new QFrame(tabConnection);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setGeometry(QRect(10, 10, 261, 671));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        verticalFrame->setPalette(palette);
        verticalFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalFrame->setFrameShape(QFrame::Box);
        verticalFrame->setLineWidth(2);
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        label = new QLabel(verticalFrame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        line = new QFrame(verticalFrame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(1);
        line->setMidLineWidth(4);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        macList = new QComboBox(verticalFrame);
        macList->setObjectName(QString::fromUtf8("macList"));
        macList->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(macList->sizePolicy().hasHeightForWidth());
        macList->setSizePolicy(sizePolicy);
        macList->setMinimumSize(QSize(170, 0));
        macList->setMaximumSize(QSize(178, 63));
        macList->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(0, 238, 0);"));

        horizontalLayout->addWidget(macList, 0, Qt::AlignRight);

        nuevaMac = new QPushButton(verticalFrame);
        nuevaMac->setObjectName(QString::fromUtf8("nuevaMac"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nuevaMac->sizePolicy().hasHeightForWidth());
        nuevaMac->setSizePolicy(sizePolicy1);
        nuevaMac->setMaximumSize(QSize(25, 25));
        nuevaMac->setIconSize(QSize(14, 16));

        horizontalLayout->addWidget(nuevaMac);

        connectionButton = new QPushButton(verticalFrame);
        connectionButton->setObjectName(QString::fromUtf8("connectionButton"));
        sizePolicy1.setHeightForWidth(connectionButton->sizePolicy().hasHeightForWidth());
        connectionButton->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons/connect-icon2.png"), QSize(), QIcon::Normal, QIcon::Off);
        connectionButton->setIcon(icon);

        horizontalLayout->addWidget(connectionButton, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        connectionLabel = new QLabel(verticalFrame);
        connectionLabel->setObjectName(QString::fromUtf8("connectionLabel"));
        connectionLabel->setFont(font);

        horizontalLayout_2->addWidget(connectionLabel);

        label_2 = new QLabel(verticalFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        connectionIconLabel = new QLabel(verticalFrame);
        connectionIconLabel->setObjectName(QString::fromUtf8("connectionIconLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(connectionIconLabel->sizePolicy().hasHeightForWidth());
        connectionIconLabel->setSizePolicy(sizePolicy2);
        connectionIconLabel->setMinimumSize(QSize(30, 30));
        connectionIconLabel->setMaximumSize(QSize(30, 30));
        connectionIconLabel->setScaledContents(true);

        horizontalLayout_2->addWidget(connectionIconLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        line_2 = new QFrame(verticalFrame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_2);

        label_4 = new QLabel(verticalFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        line_3 = new QFrame(verticalFrame);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(verticalFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_6);

        label_5 = new QLabel(verticalFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_5);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBoxEmg = new QCheckBox(verticalFrame);
        checkBoxEmg->setObjectName(QString::fromUtf8("checkBoxEmg"));
        checkBoxEmg->setEnabled(false);

        horizontalLayout_4->addWidget(checkBoxEmg);

        channelListEmg = new QComboBox(verticalFrame);
        channelListEmg->setObjectName(QString::fromUtf8("channelListEmg"));
        channelListEmg->setEnabled(false);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 170, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush2(QColor(0, 0, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush3(QColor(0, 238, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        QBrush brush4(QColor(170, 85, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        QBrush brush5(QColor(170, 170, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        QBrush brush6(QColor(0, 170, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        QBrush brush7(QColor(85, 85, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        channelListEmg->setPalette(palette1);
        channelListEmg->setFocusPolicy(Qt::StrongFocus);
        channelListEmg->setContextMenuPolicy(Qt::CustomContextMenu);
        channelListEmg->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(0, 238, 0);\n"
""));

        horizontalLayout_4->addWidget(channelListEmg);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setSpacing(6);
        horizontalLayout_48->setObjectName(QString::fromUtf8("horizontalLayout_48"));
        checkBoxAccX = new QCheckBox(verticalFrame);
        checkBoxAccX->setObjectName(QString::fromUtf8("checkBoxAccX"));
        checkBoxAccX->setEnabled(false);

        horizontalLayout_48->addWidget(checkBoxAccX);

        channelListAccX = new QComboBox(verticalFrame);
        channelListAccX->setObjectName(QString::fromUtf8("channelListAccX"));
        channelListAccX->setEnabled(false);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        channelListAccX->setPalette(palette2);
        channelListAccX->setFocusPolicy(Qt::StrongFocus);
        channelListAccX->setContextMenuPolicy(Qt::CustomContextMenu);
        channelListAccX->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(0, 238, 0);\n"
""));

        horizontalLayout_48->addWidget(channelListAccX);


        verticalLayout_4->addLayout(horizontalLayout_48);

        horizontalLayout_49 = new QHBoxLayout();
        horizontalLayout_49->setSpacing(6);
        horizontalLayout_49->setObjectName(QString::fromUtf8("horizontalLayout_49"));
        checkBoxAccY = new QCheckBox(verticalFrame);
        checkBoxAccY->setObjectName(QString::fromUtf8("checkBoxAccY"));
        checkBoxAccY->setEnabled(false);

        horizontalLayout_49->addWidget(checkBoxAccY);

        channelListAccY = new QComboBox(verticalFrame);
        channelListAccY->setObjectName(QString::fromUtf8("channelListAccY"));
        channelListAccY->setEnabled(false);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        channelListAccY->setPalette(palette3);
        channelListAccY->setFocusPolicy(Qt::StrongFocus);
        channelListAccY->setContextMenuPolicy(Qt::CustomContextMenu);
        channelListAccY->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(0, 238, 0);\n"
""));

        horizontalLayout_49->addWidget(channelListAccY);


        verticalLayout_4->addLayout(horizontalLayout_49);

        horizontalLayout_51 = new QHBoxLayout();
        horizontalLayout_51->setSpacing(6);
        horizontalLayout_51->setObjectName(QString::fromUtf8("horizontalLayout_51"));
        checkBoxAccZ = new QCheckBox(verticalFrame);
        checkBoxAccZ->setObjectName(QString::fromUtf8("checkBoxAccZ"));
        checkBoxAccZ->setEnabled(false);

        horizontalLayout_51->addWidget(checkBoxAccZ);

        channelListAccZ = new QComboBox(verticalFrame);
        channelListAccZ->setObjectName(QString::fromUtf8("channelListAccZ"));
        channelListAccZ->setEnabled(false);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        channelListAccZ->setPalette(palette4);
        channelListAccZ->setFocusPolicy(Qt::StrongFocus);
        channelListAccZ->setContextMenuPolicy(Qt::CustomContextMenu);
        channelListAccZ->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(0, 238, 0);\n"
""));

        horizontalLayout_51->addWidget(channelListAccZ);


        verticalLayout_4->addLayout(horizontalLayout_51);

        horizontalLayout_50 = new QHBoxLayout();
        horizontalLayout_50->setSpacing(6);
        horizontalLayout_50->setObjectName(QString::fromUtf8("horizontalLayout_50"));
        checkBoxEcg = new QCheckBox(verticalFrame);
        checkBoxEcg->setObjectName(QString::fromUtf8("checkBoxEcg"));
        checkBoxEcg->setEnabled(false);

        horizontalLayout_50->addWidget(checkBoxEcg);

        channelListEcg = new QComboBox(verticalFrame);
        channelListEcg->setObjectName(QString::fromUtf8("channelListEcg"));
        channelListEcg->setEnabled(false);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
        palette5.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette5.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Highlight, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        channelListEcg->setPalette(palette5);
        channelListEcg->setFocusPolicy(Qt::StrongFocus);
        channelListEcg->setContextMenuPolicy(Qt::CustomContextMenu);
        channelListEcg->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(0, 238, 0);\n"
""));

        horizontalLayout_50->addWidget(channelListEcg);


        verticalLayout_4->addLayout(horizontalLayout_50);


        verticalLayout->addLayout(verticalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        startButton = new QPushButton(verticalFrame);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy3);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons/start-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        startButton->setIcon(icon1);

        horizontalLayout_5->addWidget(startButton);

        stopButton = new QPushButton(verticalFrame);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setEnabled(false);
        sizePolicy3.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy3);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons/stop-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon2);

        horizontalLayout_5->addWidget(stopButton);


        verticalLayout->addLayout(horizontalLayout_5);

        line_4 = new QFrame(verticalFrame);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_4);

        label_8 = new QLabel(verticalFrame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_8);

        channelListCapture = new QComboBox(verticalFrame);
        channelListCapture->setObjectName(QString::fromUtf8("channelListCapture"));
        channelListCapture->setEnabled(false);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush);
        palette6.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette6.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Highlight, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        channelListCapture->setPalette(palette6);
        channelListCapture->setFocusPolicy(Qt::StrongFocus);
        channelListCapture->setContextMenuPolicy(Qt::CustomContextMenu);
        channelListCapture->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(0, 238, 0);\n"
""));

        verticalLayout->addWidget(channelListCapture);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        startCapture = new QPushButton(verticalFrame);
        startCapture->setObjectName(QString::fromUtf8("startCapture"));
        startCapture->setEnabled(false);
        sizePolicy3.setHeightForWidth(startCapture->sizePolicy().hasHeightForWidth());
        startCapture->setSizePolicy(sizePolicy3);
        startCapture->setIcon(icon1);

        horizontalLayout_6->addWidget(startCapture);

        stopCapture = new QPushButton(verticalFrame);
        stopCapture->setObjectName(QString::fromUtf8("stopCapture"));
        stopCapture->setEnabled(false);
        sizePolicy3.setHeightForWidth(stopCapture->sizePolicy().hasHeightForWidth());
        stopCapture->setSizePolicy(sizePolicy3);
        stopCapture->setIcon(icon2);

        horizontalLayout_6->addWidget(stopCapture);


        verticalLayout->addLayout(horizontalLayout_6);

        line_5 = new QFrame(verticalFrame);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_5);

        label_86 = new QLabel(verticalFrame);
        label_86->setObjectName(QString::fromUtf8("label_86"));
        label_86->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_86);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        startDebug = new QPushButton(verticalFrame);
        startDebug->setObjectName(QString::fromUtf8("startDebug"));
        startDebug->setEnabled(true);
        sizePolicy3.setHeightForWidth(startDebug->sizePolicy().hasHeightForWidth());
        startDebug->setSizePolicy(sizePolicy3);
        startDebug->setIcon(icon1);

        horizontalLayout_40->addWidget(startDebug);

        stopDebug = new QPushButton(verticalFrame);
        stopDebug->setObjectName(QString::fromUtf8("stopDebug"));
        stopDebug->setEnabled(true);
        sizePolicy3.setHeightForWidth(stopDebug->sizePolicy().hasHeightForWidth());
        stopDebug->setSizePolicy(sizePolicy3);
        stopDebug->setIcon(icon2);

        horizontalLayout_40->addWidget(stopDebug);


        verticalLayout->addLayout(horizontalLayout_40);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_7 = new QLabel(verticalFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy4);
        label_7->setMaximumSize(QSize(16777215, 100));
        label_7->setLineWidth(1);
        label_7->setMidLineWidth(0);
        label_7->setTextFormat(Qt::PlainText);
        label_7->setPixmap(QPixmap(QString::fromUtf8("icons/robolab.png")));
        label_7->setScaledContents(true);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_7->setWordWrap(true);

        verticalLayout->addWidget(label_7);

        verticalLayoutWidget = new QWidget(tabConnection);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(320, 40, 601, 131));
        plotEmgPpal = new QVBoxLayout(verticalLayoutWidget);
        plotEmgPpal->setSpacing(6);
        plotEmgPpal->setContentsMargins(11, 11, 11, 11);
        plotEmgPpal->setObjectName(QString::fromUtf8("plotEmgPpal"));
        plotEmgPpal->setContentsMargins(0, 0, 0, 0);
        result = new QLabel(tabConnection);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(300, 620, 621, 61));
        result->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        result->setFrameShape(QFrame::Panel);
        result->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(tabConnection);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 600, 621, 20));
        label_3->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_2 = new QWidget(tabConnection);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(320, 220, 161, 181));
        plotAccXPpal = new QVBoxLayout(verticalLayoutWidget_2);
        plotAccXPpal->setSpacing(6);
        plotAccXPpal->setContentsMargins(11, 11, 11, 11);
        plotAccXPpal->setObjectName(QString::fromUtf8("plotAccXPpal"));
        plotAccXPpal->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(tabConnection);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(320, 10, 71, 21));
        label_10 = new QLabel(tabConnection);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(320, 190, 66, 17));
        verticalLayoutWidget_15 = new QWidget(tabConnection);
        verticalLayoutWidget_15->setObjectName(QString::fromUtf8("verticalLayoutWidget_15"));
        verticalLayoutWidget_15->setGeometry(QRect(540, 220, 161, 181));
        plotAccYPpal = new QVBoxLayout(verticalLayoutWidget_15);
        plotAccYPpal->setSpacing(6);
        plotAccYPpal->setContentsMargins(11, 11, 11, 11);
        plotAccYPpal->setObjectName(QString::fromUtf8("plotAccYPpal"));
        plotAccYPpal->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_16 = new QWidget(tabConnection);
        verticalLayoutWidget_16->setObjectName(QString::fromUtf8("verticalLayoutWidget_16"));
        verticalLayoutWidget_16->setGeometry(QRect(760, 220, 161, 181));
        plotAccZPpal = new QVBoxLayout(verticalLayoutWidget_16);
        plotAccZPpal->setSpacing(6);
        plotAccZPpal->setContentsMargins(11, 11, 11, 11);
        plotAccZPpal->setObjectName(QString::fromUtf8("plotAccZPpal"));
        plotAccZPpal->setContentsMargins(0, 0, 0, 0);
        label_99 = new QLabel(tabConnection);
        label_99->setObjectName(QString::fromUtf8("label_99"));
        label_99->setGeometry(QRect(540, 190, 66, 17));
        label_100 = new QLabel(tabConnection);
        label_100->setObjectName(QString::fromUtf8("label_100"));
        label_100->setGeometry(QRect(760, 190, 66, 17));
        masEscalaEmgPpal = new QPushButton(tabConnection);
        masEscalaEmgPpal->setObjectName(QString::fromUtf8("masEscalaEmgPpal"));
        masEscalaEmgPpal->setEnabled(false);
        masEscalaEmgPpal->setGeometry(QRect(940, 70, 31, 27));
        menosEscalaEmgPpal = new QPushButton(tabConnection);
        menosEscalaEmgPpal->setObjectName(QString::fromUtf8("menosEscalaEmgPpal"));
        menosEscalaEmgPpal->setEnabled(false);
        menosEscalaEmgPpal->setGeometry(QRect(940, 120, 31, 27));
        label_65 = new QLabel(tabConnection);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setGeometry(QRect(320, 420, 71, 21));
        verticalLayoutWidget_3 = new QWidget(tabConnection);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(320, 450, 601, 131));
        plotEcgPpal = new QVBoxLayout(verticalLayoutWidget_3);
        plotEcgPpal->setSpacing(6);
        plotEcgPpal->setContentsMargins(11, 11, 11, 11);
        plotEcgPpal->setObjectName(QString::fromUtf8("plotEcgPpal"));
        plotEcgPpal->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tabConnection, QString());
        tabEmgProcessor = new QWidget();
        tabEmgProcessor->setObjectName(QString::fromUtf8("tabEmgProcessor"));
        verticalLayoutWidget_6 = new QWidget(tabEmgProcessor);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(310, 40, 561, 251));
        plotEmgProcesado = new QVBoxLayout(verticalLayoutWidget_6);
        plotEmgProcesado->setSpacing(6);
        plotEmgProcesado->setContentsMargins(11, 11, 11, 11);
        plotEmgProcesado->setObjectName(QString::fromUtf8("plotEmgProcesado"));
        plotEmgProcesado->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(tabEmgProcessor);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(300, 10, 221, 21));
        resultEmgProcessor = new QLabel(tabEmgProcessor);
        resultEmgProcessor->setObjectName(QString::fromUtf8("resultEmgProcessor"));
        resultEmgProcessor->setGeometry(QRect(300, 620, 621, 61));
        resultEmgProcessor->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        resultEmgProcessor->setFrameShape(QFrame::Panel);
        resultEmgProcessor->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_5 = new QWidget(tabEmgProcessor);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(310, 340, 561, 251));
        plotEmgPicos = new QVBoxLayout(verticalLayoutWidget_5);
        plotEmgPicos->setSpacing(6);
        plotEmgPicos->setContentsMargins(11, 11, 11, 11);
        plotEmgPicos->setObjectName(QString::fromUtf8("plotEmgPicos"));
        plotEmgPicos->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(tabEmgProcessor);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(300, 310, 251, 17));
        verticalFrame_3 = new QFrame(tabEmgProcessor);
        verticalFrame_3->setObjectName(QString::fromUtf8("verticalFrame_3"));
        verticalFrame_3->setGeometry(QRect(10, 10, 261, 671));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush);
        palette7.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        verticalFrame_3->setPalette(palette7);
        verticalFrame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalFrame_3->setFrameShape(QFrame::Box);
        verticalFrame_3->setLineWidth(2);
        verticalLayout_3 = new QVBoxLayout(verticalFrame_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetNoConstraint);
        label_23 = new QLabel(verticalFrame_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font);
        label_23->setAutoFillBackground(false);
        label_23->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_23);

        line_9 = new QFrame(verticalFrame_3);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShadow(QFrame::Plain);
        line_9->setLineWidth(1);
        line_9->setMidLineWidth(4);
        line_9->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(line_9);

        label_24 = new QLabel(verticalFrame_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_24);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        filterList = new QComboBox(verticalFrame_3);
        filterList->setObjectName(QString::fromUtf8("filterList"));
        filterList->setEnabled(true);
        sizePolicy.setHeightForWidth(filterList->sizePolicy().hasHeightForWidth());
        filterList->setSizePolicy(sizePolicy);
        filterList->setMinimumSize(QSize(170, 0));
        filterList->setMaximumSize(QSize(243, 63));
        filterList->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(0, 238, 0);"));

        horizontalLayout_19->addWidget(filterList);


        verticalLayout_3->addLayout(horizontalLayout_19);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        startButterworth = new QPushButton(verticalFrame_3);
        startButterworth->setObjectName(QString::fromUtf8("startButterworth"));
        startButterworth->setEnabled(false);
        sizePolicy3.setHeightForWidth(startButterworth->sizePolicy().hasHeightForWidth());
        startButterworth->setSizePolicy(sizePolicy3);
        startButterworth->setIcon(icon1);

        horizontalLayout_7->addWidget(startButterworth);

        stopButterworth = new QPushButton(verticalFrame_3);
        stopButterworth->setObjectName(QString::fromUtf8("stopButterworth"));
        stopButterworth->setEnabled(false);
        sizePolicy3.setHeightForWidth(stopButterworth->sizePolicy().hasHeightForWidth());
        stopButterworth->setSizePolicy(sizePolicy3);
        stopButterworth->setIcon(icon2);

        horizontalLayout_7->addWidget(stopButterworth);


        verticalLayout_3->addLayout(horizontalLayout_7);

        line_10 = new QFrame(verticalFrame_3);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setFrameShadow(QFrame::Plain);
        line_10->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(line_10);

        label_25 = new QLabel(verticalFrame_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_25);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_11 = new QLabel(verticalFrame_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_8->addWidget(label_11);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        windowSize = new QSpinBox(verticalFrame_3);
        windowSize->setObjectName(QString::fromUtf8("windowSize"));
        windowSize->setValue(40);

        horizontalLayout_8->addWidget(windowSize);

        label_14 = new QLabel(verticalFrame_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_8->addWidget(label_14);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_31 = new QLabel(verticalFrame_3);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_15->addWidget(label_31);

        activateDownsample = new QCheckBox(verticalFrame_3);
        activateDownsample->setObjectName(QString::fromUtf8("activateDownsample"));

        horizontalLayout_15->addWidget(activateDownsample);


        verticalLayout_3->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_32 = new QLabel(verticalFrame_3);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_16->addWidget(label_32);

        downsampleWindow = new QSpinBox(verticalFrame_3);
        downsampleWindow->setObjectName(QString::fromUtf8("downsampleWindow"));
        downsampleWindow->setEnabled(false);
        downsampleWindow->setValue(40);

        horizontalLayout_16->addWidget(downsampleWindow);

        label_33 = new QLabel(verticalFrame_3);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_16->addWidget(label_33);


        verticalLayout_3->addLayout(horizontalLayout_16);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        startAverage = new QPushButton(verticalFrame_3);
        startAverage->setObjectName(QString::fromUtf8("startAverage"));
        startAverage->setEnabled(false);
        sizePolicy3.setHeightForWidth(startAverage->sizePolicy().hasHeightForWidth());
        startAverage->setSizePolicy(sizePolicy3);
        startAverage->setIcon(icon1);

        horizontalLayout_9->addWidget(startAverage);

        stopAverage = new QPushButton(verticalFrame_3);
        stopAverage->setObjectName(QString::fromUtf8("stopAverage"));
        stopAverage->setEnabled(false);
        sizePolicy3.setHeightForWidth(stopAverage->sizePolicy().hasHeightForWidth());
        stopAverage->setSizePolicy(sizePolicy3);
        stopAverage->setIcon(icon2);

        horizontalLayout_9->addWidget(stopAverage);


        verticalLayout_3->addLayout(horizontalLayout_9);

        line_11 = new QFrame(verticalFrame_3);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setFrameShadow(QFrame::Plain);
        line_11->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(line_11);

        label_26 = new QLabel(verticalFrame_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_26);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_20 = new QLabel(verticalFrame_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_14->addWidget(label_20);

        envelopeWindow = new QSpinBox(verticalFrame_3);
        envelopeWindow->setObjectName(QString::fromUtf8("envelopeWindow"));
        envelopeWindow->setValue(5);

        horizontalLayout_14->addWidget(envelopeWindow);

        label_27 = new QLabel(verticalFrame_3);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_14->addWidget(label_27);


        verticalLayout_3->addLayout(horizontalLayout_14);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_16 = new QLabel(verticalFrame_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_12->addWidget(label_16);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_6);

        minValue = new QDoubleSpinBox(verticalFrame_3);
        minValue->setObjectName(QString::fromUtf8("minValue"));
        minValue->setValue(0.1);

        horizontalLayout_12->addWidget(minValue);

        label_17 = new QLabel(verticalFrame_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_12->addWidget(label_17);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_18 = new QLabel(verticalFrame_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_13->addWidget(label_18);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_8);

        maxValue = new QDoubleSpinBox(verticalFrame_3);
        maxValue->setObjectName(QString::fromUtf8("maxValue"));
        maxValue->setValue(1.5);

        horizontalLayout_13->addWidget(maxValue);

        label_19 = new QLabel(verticalFrame_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_13->addWidget(label_19);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_12 = new QLabel(verticalFrame_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_10->addWidget(label_12);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        threshold = new QDoubleSpinBox(verticalFrame_3);
        threshold->setObjectName(QString::fromUtf8("threshold"));
        threshold->setMaximum(6);
        threshold->setSingleStep(0.15);
        threshold->setValue(0.5);

        horizontalLayout_10->addWidget(threshold);

        label_15 = new QLabel(verticalFrame_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_10->addWidget(label_15);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        calibrationButtonEmg = new QPushButton(verticalFrame_3);
        calibrationButtonEmg->setObjectName(QString::fromUtf8("calibrationButtonEmg"));
        calibrationButtonEmg->setEnabled(false);

        horizontalLayout_42->addWidget(calibrationButtonEmg);

        label_85 = new QLabel(verticalFrame_3);
        label_85->setObjectName(QString::fromUtf8("label_85"));

        horizontalLayout_42->addWidget(label_85);

        calibrationTime = new QSpinBox(verticalFrame_3);
        calibrationTime->setObjectName(QString::fromUtf8("calibrationTime"));
        calibrationTime->setValue(10);

        horizontalLayout_42->addWidget(calibrationTime);


        verticalLayout_3->addLayout(horizontalLayout_42);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        startDetection = new QPushButton(verticalFrame_3);
        startDetection->setObjectName(QString::fromUtf8("startDetection"));
        startDetection->setEnabled(false);
        sizePolicy3.setHeightForWidth(startDetection->sizePolicy().hasHeightForWidth());
        startDetection->setSizePolicy(sizePolicy3);
        startDetection->setIcon(icon1);

        horizontalLayout_11->addWidget(startDetection);

        stopDetection = new QPushButton(verticalFrame_3);
        stopDetection->setObjectName(QString::fromUtf8("stopDetection"));
        stopDetection->setEnabled(false);
        sizePolicy3.setHeightForWidth(stopDetection->sizePolicy().hasHeightForWidth());
        stopDetection->setSizePolicy(sizePolicy3);
        stopDetection->setIcon(icon2);

        horizontalLayout_11->addWidget(stopDetection);


        verticalLayout_3->addLayout(horizontalLayout_11);

        line_12 = new QFrame(verticalFrame_3);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setFrameShadow(QFrame::Plain);
        line_12->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(line_12);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        label_29 = new QLabel(verticalFrame_3);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        sizePolicy4.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy4);
        label_29->setMaximumSize(QSize(16777215, 100));
        label_29->setLineWidth(1);
        label_29->setMidLineWidth(0);
        label_29->setTextFormat(Qt::PlainText);
        label_29->setPixmap(QPixmap(QString::fromUtf8("icons/robolab.png")));
        label_29->setScaledContents(true);
        label_29->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_29->setWordWrap(true);

        verticalLayout_3->addWidget(label_29);

        label_22 = new QLabel(tabEmgProcessor);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(290, 600, 621, 20));
        label_22->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(tabEmgProcessor);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(900, 350, 111, 20));
        peakDetected = new QLabel(tabEmgProcessor);
        peakDetected->setObjectName(QString::fromUtf8("peakDetected"));
        peakDetected->setGeometry(QRect(930, 380, 51, 51));
        sizePolicy4.setHeightForWidth(peakDetected->sizePolicy().hasHeightForWidth());
        peakDetected->setSizePolicy(sizePolicy4);
        peakDetected->setMaximumSize(QSize(16777215, 100));
        peakDetected->setLineWidth(1);
        peakDetected->setMidLineWidth(0);
        peakDetected->setTextFormat(Qt::PlainText);
        peakDetected->setPixmap(QPixmap(QString::fromUtf8("icons/green-led-off.png")));
        peakDetected->setScaledContents(true);
        peakDetected->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        peakDetected->setWordWrap(true);
        peakCounter = new QLCDNumber(tabEmgProcessor);
        peakCounter->setObjectName(QString::fromUtf8("peakCounter"));
        peakCounter->setEnabled(true);
        peakCounter->setGeometry(QRect(900, 480, 91, 31));
        label_28 = new QLabel(tabEmgProcessor);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(900, 450, 101, 20));
        menosEscalaEmgProcesado = new QPushButton(tabEmgProcessor);
        menosEscalaEmgProcesado->setObjectName(QString::fromUtf8("menosEscalaEmgProcesado"));
        menosEscalaEmgProcesado->setEnabled(false);
        menosEscalaEmgProcesado->setGeometry(QRect(900, 160, 31, 27));
        masEscalaEmgProcesado = new QPushButton(tabEmgProcessor);
        masEscalaEmgProcesado->setObjectName(QString::fromUtf8("masEscalaEmgProcesado"));
        masEscalaEmgProcesado->setEnabled(false);
        masEscalaEmgProcesado->setGeometry(QRect(900, 110, 31, 27));
        tabWidget->addTab(tabEmgProcessor, QString());
        tabAccProcessor = new QWidget();
        tabAccProcessor->setObjectName(QString::fromUtf8("tabAccProcessor"));
        label_67 = new QLabel(tabAccProcessor);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setGeometry(QRect(310, 200, 66, 17));
        label_68 = new QLabel(tabAccProcessor);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setGeometry(QRect(310, 10, 71, 21));
        verticalLayoutWidget_9 = new QWidget(tabAccProcessor);
        verticalLayoutWidget_9->setObjectName(QString::fromUtf8("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(310, 30, 571, 161));
        plotAccXProcesado = new QVBoxLayout(verticalLayoutWidget_9);
        plotAccXProcesado->setSpacing(6);
        plotAccXProcesado->setContentsMargins(11, 11, 11, 11);
        plotAccXProcesado->setObjectName(QString::fromUtf8("plotAccXProcesado"));
        plotAccXProcesado->setContentsMargins(0, 0, 0, 0);
        resultAcc = new QLabel(tabAccProcessor);
        resultAcc->setObjectName(QString::fromUtf8("resultAcc"));
        resultAcc->setGeometry(QRect(300, 620, 621, 61));
        resultAcc->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        resultAcc->setFrameShape(QFrame::Panel);
        resultAcc->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_10 = new QWidget(tabAccProcessor);
        verticalLayoutWidget_10->setObjectName(QString::fromUtf8("verticalLayoutWidget_10"));
        verticalLayoutWidget_10->setGeometry(QRect(310, 220, 571, 161));
        plotAccYProcesado = new QVBoxLayout(verticalLayoutWidget_10);
        plotAccYProcesado->setSpacing(6);
        plotAccYProcesado->setContentsMargins(11, 11, 11, 11);
        plotAccYProcesado->setObjectName(QString::fromUtf8("plotAccYProcesado"));
        plotAccYProcesado->setContentsMargins(0, 0, 0, 0);
        label_76 = new QLabel(tabAccProcessor);
        label_76->setObjectName(QString::fromUtf8("label_76"));
        label_76->setGeometry(QRect(300, 600, 621, 20));
        label_76->setAlignment(Qt::AlignCenter);
        verticalFrame_4 = new QFrame(tabAccProcessor);
        verticalFrame_4->setObjectName(QString::fromUtf8("verticalFrame_4"));
        verticalFrame_4->setGeometry(QRect(10, 10, 261, 671));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush);
        palette8.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        verticalFrame_4->setPalette(palette8);
        verticalFrame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalFrame_4->setFrameShape(QFrame::Box);
        verticalFrame_4->setLineWidth(2);
        verticalLayout_5 = new QVBoxLayout(verticalFrame_4);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetNoConstraint);
        label_34 = new QLabel(verticalFrame_4);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFont(font);
        label_34->setAutoFillBackground(false);
        label_34->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_34);

        line_17 = new QFrame(verticalFrame_4);
        line_17->setObjectName(QString::fromUtf8("line_17"));
        line_17->setFrameShadow(QFrame::Plain);
        line_17->setFrameShape(QFrame::HLine);

        verticalLayout_5->addWidget(line_17);

        label_42 = new QLabel(verticalFrame_4);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        verticalLayout_5->addWidget(label_42, 0, Qt::AlignHCenter);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        checkBoxFilterAccX = new QCheckBox(verticalFrame_4);
        checkBoxFilterAccX->setObjectName(QString::fromUtf8("checkBoxFilterAccX"));

        horizontalLayout_24->addWidget(checkBoxFilterAccX);

        checkBoxFilterAccY = new QCheckBox(verticalFrame_4);
        checkBoxFilterAccY->setObjectName(QString::fromUtf8("checkBoxFilterAccY"));

        horizontalLayout_24->addWidget(checkBoxFilterAccY);

        checkBoxFilterAccZ = new QCheckBox(verticalFrame_4);
        checkBoxFilterAccZ->setObjectName(QString::fromUtf8("checkBoxFilterAccZ"));

        horizontalLayout_24->addWidget(checkBoxFilterAccZ);


        verticalLayout_5->addLayout(horizontalLayout_24);

        line_13 = new QFrame(verticalFrame_4);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setFrameShadow(QFrame::Plain);
        line_13->setLineWidth(1);
        line_13->setMidLineWidth(4);
        line_13->setFrameShape(QFrame::HLine);

        verticalLayout_5->addWidget(line_13);

        label_35 = new QLabel(verticalFrame_4);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_35);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        filterListAcc = new QComboBox(verticalFrame_4);
        filterListAcc->setObjectName(QString::fromUtf8("filterListAcc"));
        filterListAcc->setEnabled(true);
        sizePolicy.setHeightForWidth(filterListAcc->sizePolicy().hasHeightForWidth());
        filterListAcc->setSizePolicy(sizePolicy);
        filterListAcc->setMinimumSize(QSize(170, 0));
        filterListAcc->setMaximumSize(QSize(243, 63));
        filterListAcc->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(0, 238, 0);"));

        horizontalLayout_20->addWidget(filterListAcc);


        verticalLayout_5->addLayout(horizontalLayout_20);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        startButterworthAcc = new QPushButton(verticalFrame_4);
        startButterworthAcc->setObjectName(QString::fromUtf8("startButterworthAcc"));
        startButterworthAcc->setEnabled(false);
        sizePolicy3.setHeightForWidth(startButterworthAcc->sizePolicy().hasHeightForWidth());
        startButterworthAcc->setSizePolicy(sizePolicy3);
        startButterworthAcc->setIcon(icon1);

        horizontalLayout_17->addWidget(startButterworthAcc);

        stopButterworthAcc = new QPushButton(verticalFrame_4);
        stopButterworthAcc->setObjectName(QString::fromUtf8("stopButterworthAcc"));
        stopButterworthAcc->setEnabled(false);
        sizePolicy3.setHeightForWidth(stopButterworthAcc->sizePolicy().hasHeightForWidth());
        stopButterworthAcc->setSizePolicy(sizePolicy3);
        stopButterworthAcc->setIcon(icon2);

        horizontalLayout_17->addWidget(stopButterworthAcc);


        verticalLayout_5->addLayout(horizontalLayout_17);

        line_14 = new QFrame(verticalFrame_4);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setFrameShadow(QFrame::Plain);
        line_14->setFrameShape(QFrame::HLine);

        verticalLayout_5->addWidget(line_14);

        label_36 = new QLabel(verticalFrame_4);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_36);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_37 = new QLabel(verticalFrame_4);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        horizontalLayout_18->addWidget(label_37);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_7);

        windowSizeAcc = new QSpinBox(verticalFrame_4);
        windowSizeAcc->setObjectName(QString::fromUtf8("windowSizeAcc"));
        windowSizeAcc->setValue(40);

        horizontalLayout_18->addWidget(windowSizeAcc);

        label_38 = new QLabel(verticalFrame_4);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        horizontalLayout_18->addWidget(label_38);


        verticalLayout_5->addLayout(horizontalLayout_18);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_39 = new QLabel(verticalFrame_4);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        horizontalLayout_21->addWidget(label_39);

        activateDownsampleAcc = new QCheckBox(verticalFrame_4);
        activateDownsampleAcc->setObjectName(QString::fromUtf8("activateDownsampleAcc"));

        horizontalLayout_21->addWidget(activateDownsampleAcc);


        verticalLayout_5->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_40 = new QLabel(verticalFrame_4);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        horizontalLayout_22->addWidget(label_40);

        downsampleWindowAcc = new QSpinBox(verticalFrame_4);
        downsampleWindowAcc->setObjectName(QString::fromUtf8("downsampleWindowAcc"));
        downsampleWindowAcc->setEnabled(false);
        downsampleWindowAcc->setValue(40);

        horizontalLayout_22->addWidget(downsampleWindowAcc);

        label_41 = new QLabel(verticalFrame_4);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        horizontalLayout_22->addWidget(label_41);


        verticalLayout_5->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        startAverageAcc = new QPushButton(verticalFrame_4);
        startAverageAcc->setObjectName(QString::fromUtf8("startAverageAcc"));
        startAverageAcc->setEnabled(false);
        sizePolicy3.setHeightForWidth(startAverageAcc->sizePolicy().hasHeightForWidth());
        startAverageAcc->setSizePolicy(sizePolicy3);
        startAverageAcc->setIcon(icon1);

        horizontalLayout_23->addWidget(startAverageAcc);

        stopAverageAcc = new QPushButton(verticalFrame_4);
        stopAverageAcc->setObjectName(QString::fromUtf8("stopAverageAcc"));
        stopAverageAcc->setEnabled(false);
        sizePolicy3.setHeightForWidth(stopAverageAcc->sizePolicy().hasHeightForWidth());
        stopAverageAcc->setSizePolicy(sizePolicy3);
        stopAverageAcc->setIcon(icon2);

        horizontalLayout_23->addWidget(stopAverageAcc);


        verticalLayout_5->addLayout(horizontalLayout_23);

        line_15 = new QFrame(verticalFrame_4);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setFrameShadow(QFrame::Plain);
        line_15->setLineWidth(1);
        line_15->setMidLineWidth(4);
        line_15->setFrameShape(QFrame::HLine);

        verticalLayout_5->addWidget(line_15);

        label_45 = new QLabel(verticalFrame_4);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        verticalLayout_5->addWidget(label_45, 0, Qt::AlignHCenter);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        label_43 = new QLabel(verticalFrame_4);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        horizontalLayout_25->addWidget(label_43);

        thresholdValueX = new QDoubleSpinBox(verticalFrame_4);
        thresholdValueX->setObjectName(QString::fromUtf8("thresholdValueX"));
        thresholdValueX->setMinimum(-3);
        thresholdValueX->setMaximum(3);
        thresholdValueX->setSingleStep(0.25);

        horizontalLayout_25->addWidget(thresholdValueX);

        label_44 = new QLabel(verticalFrame_4);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        horizontalLayout_25->addWidget(label_44);


        verticalLayout_5->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        label_46 = new QLabel(verticalFrame_4);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        horizontalLayout_26->addWidget(label_46);

        thresholdValueY = new QDoubleSpinBox(verticalFrame_4);
        thresholdValueY->setObjectName(QString::fromUtf8("thresholdValueY"));
        thresholdValueY->setMinimum(-3);
        thresholdValueY->setMaximum(3);
        thresholdValueY->setSingleStep(0.25);

        horizontalLayout_26->addWidget(thresholdValueY);

        label_47 = new QLabel(verticalFrame_4);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        horizontalLayout_26->addWidget(label_47);


        verticalLayout_5->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        label_48 = new QLabel(verticalFrame_4);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        horizontalLayout_27->addWidget(label_48);

        thresholdValueZ = new QDoubleSpinBox(verticalFrame_4);
        thresholdValueZ->setObjectName(QString::fromUtf8("thresholdValueZ"));
        thresholdValueZ->setMinimum(-3);
        thresholdValueZ->setMaximum(3);
        thresholdValueZ->setSingleStep(0.25);

        horizontalLayout_27->addWidget(thresholdValueZ);

        label_49 = new QLabel(verticalFrame_4);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        horizontalLayout_27->addWidget(label_49);


        verticalLayout_5->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        startDetectionAcc = new QPushButton(verticalFrame_4);
        startDetectionAcc->setObjectName(QString::fromUtf8("startDetectionAcc"));
        startDetectionAcc->setEnabled(false);
        sizePolicy3.setHeightForWidth(startDetectionAcc->sizePolicy().hasHeightForWidth());
        startDetectionAcc->setSizePolicy(sizePolicy3);
        startDetectionAcc->setIcon(icon1);

        horizontalLayout_28->addWidget(startDetectionAcc);

        stopDetectionAcc = new QPushButton(verticalFrame_4);
        stopDetectionAcc->setObjectName(QString::fromUtf8("stopDetectionAcc"));
        stopDetectionAcc->setEnabled(false);
        sizePolicy3.setHeightForWidth(stopDetectionAcc->sizePolicy().hasHeightForWidth());
        stopDetectionAcc->setSizePolicy(sizePolicy3);
        stopDetectionAcc->setIcon(icon2);

        horizontalLayout_28->addWidget(stopDetectionAcc);


        verticalLayout_5->addLayout(horizontalLayout_28);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        line_16 = new QFrame(verticalFrame_4);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setFrameShadow(QFrame::Plain);
        line_16->setFrameShape(QFrame::HLine);

        verticalLayout_5->addWidget(line_16);

        label_51 = new QLabel(verticalFrame_4);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        sizePolicy4.setHeightForWidth(label_51->sizePolicy().hasHeightForWidth());
        label_51->setSizePolicy(sizePolicy4);
        label_51->setMaximumSize(QSize(16777215, 100));
        label_51->setLineWidth(1);
        label_51->setMidLineWidth(0);
        label_51->setTextFormat(Qt::PlainText);
        label_51->setPixmap(QPixmap(QString::fromUtf8("icons/robolab.png")));
        label_51->setScaledContents(true);
        label_51->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_51->setWordWrap(true);

        verticalLayout_5->addWidget(label_51);

        verticalLayoutWidget_11 = new QWidget(tabAccProcessor);
        verticalLayoutWidget_11->setObjectName(QString::fromUtf8("verticalLayoutWidget_11"));
        verticalLayoutWidget_11->setGeometry(QRect(310, 410, 571, 161));
        plotAccZProcesado = new QVBoxLayout(verticalLayoutWidget_11);
        plotAccZProcesado->setSpacing(6);
        plotAccZProcesado->setContentsMargins(11, 11, 11, 11);
        plotAccZProcesado->setObjectName(QString::fromUtf8("plotAccZProcesado"));
        plotAccZProcesado->setContentsMargins(0, 0, 0, 0);
        label_69 = new QLabel(tabAccProcessor);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setGeometry(QRect(310, 390, 66, 17));
        label_50 = new QLabel(tabAccProcessor);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(890, 30, 121, 20));
        ledAccX = new QLabel(tabAccProcessor);
        ledAccX->setObjectName(QString::fromUtf8("ledAccX"));
        ledAccX->setGeometry(QRect(920, 60, 51, 51));
        sizePolicy4.setHeightForWidth(ledAccX->sizePolicy().hasHeightForWidth());
        ledAccX->setSizePolicy(sizePolicy4);
        ledAccX->setMaximumSize(QSize(16777215, 100));
        ledAccX->setLineWidth(1);
        ledAccX->setMidLineWidth(0);
        ledAccX->setTextFormat(Qt::PlainText);
        ledAccX->setPixmap(QPixmap(QString::fromUtf8("icons/green-led-off.png")));
        ledAccX->setScaledContents(true);
        ledAccX->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ledAccX->setWordWrap(true);
        ledAccY = new QLabel(tabAccProcessor);
        ledAccY->setObjectName(QString::fromUtf8("ledAccY"));
        ledAccY->setGeometry(QRect(920, 250, 51, 51));
        sizePolicy4.setHeightForWidth(ledAccY->sizePolicy().hasHeightForWidth());
        ledAccY->setSizePolicy(sizePolicy4);
        ledAccY->setMaximumSize(QSize(16777215, 100));
        ledAccY->setLineWidth(1);
        ledAccY->setMidLineWidth(0);
        ledAccY->setTextFormat(Qt::PlainText);
        ledAccY->setPixmap(QPixmap(QString::fromUtf8("icons/green-led-off.png")));
        ledAccY->setScaledContents(true);
        ledAccY->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ledAccY->setWordWrap(true);
        label_52 = new QLabel(tabAccProcessor);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(890, 220, 121, 20));
        ledAccZ = new QLabel(tabAccProcessor);
        ledAccZ->setObjectName(QString::fromUtf8("ledAccZ"));
        ledAccZ->setGeometry(QRect(920, 440, 51, 51));
        sizePolicy4.setHeightForWidth(ledAccZ->sizePolicy().hasHeightForWidth());
        ledAccZ->setSizePolicy(sizePolicy4);
        ledAccZ->setMaximumSize(QSize(16777215, 100));
        ledAccZ->setLineWidth(1);
        ledAccZ->setMidLineWidth(0);
        ledAccZ->setTextFormat(Qt::PlainText);
        ledAccZ->setPixmap(QPixmap(QString::fromUtf8("icons/green-led-off.png")));
        ledAccZ->setScaledContents(true);
        ledAccZ->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ledAccZ->setWordWrap(true);
        label_53 = new QLabel(tabAccProcessor);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(890, 410, 121, 20));
        tabWidget->addTab(tabAccProcessor, QString());
        tabEcgProcessor = new QWidget();
        tabEcgProcessor->setObjectName(QString::fromUtf8("tabEcgProcessor"));
        verticalLayoutWidget_7 = new QWidget(tabEcgProcessor);
        verticalLayoutWidget_7->setObjectName(QString::fromUtf8("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(300, 40, 611, 191));
        plotEcgProcesado = new QVBoxLayout(verticalLayoutWidget_7);
        plotEcgProcesado->setSpacing(6);
        plotEcgProcesado->setContentsMargins(11, 11, 11, 11);
        plotEcgProcesado->setObjectName(QString::fromUtf8("plotEcgProcesado"));
        plotEcgProcesado->setContentsMargins(0, 0, 0, 0);
        label_54 = new QLabel(tabEcgProcessor);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(300, 10, 221, 21));
        verticalFrame_5 = new QFrame(tabEcgProcessor);
        verticalFrame_5->setObjectName(QString::fromUtf8("verticalFrame_5"));
        verticalFrame_5->setGeometry(QRect(10, 10, 261, 671));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Button, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush);
        palette9.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        verticalFrame_5->setPalette(palette9);
        verticalFrame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalFrame_5->setFrameShape(QFrame::Box);
        verticalFrame_5->setLineWidth(2);
        verticalLayout_6 = new QVBoxLayout(verticalFrame_5);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetNoConstraint);
        label_55 = new QLabel(verticalFrame_5);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setFont(font);
        label_55->setAutoFillBackground(false);
        label_55->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_55);

        line_18 = new QFrame(verticalFrame_5);
        line_18->setObjectName(QString::fromUtf8("line_18"));
        line_18->setFrameShadow(QFrame::Plain);
        line_18->setLineWidth(1);
        line_18->setMidLineWidth(4);
        line_18->setFrameShape(QFrame::HLine);

        verticalLayout_6->addWidget(line_18);

        label_56 = new QLabel(verticalFrame_5);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_56);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        filterListEcg = new QComboBox(verticalFrame_5);
        filterListEcg->setObjectName(QString::fromUtf8("filterListEcg"));
        filterListEcg->setEnabled(true);
        sizePolicy.setHeightForWidth(filterListEcg->sizePolicy().hasHeightForWidth());
        filterListEcg->setSizePolicy(sizePolicy);
        filterListEcg->setMinimumSize(QSize(170, 0));
        filterListEcg->setMaximumSize(QSize(243, 63));
        filterListEcg->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(0, 238, 0);"));

        horizontalLayout_29->addWidget(filterListEcg);


        verticalLayout_6->addLayout(horizontalLayout_29);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        startButterworthEcg = new QPushButton(verticalFrame_5);
        startButterworthEcg->setObjectName(QString::fromUtf8("startButterworthEcg"));
        startButterworthEcg->setEnabled(false);
        sizePolicy3.setHeightForWidth(startButterworthEcg->sizePolicy().hasHeightForWidth());
        startButterworthEcg->setSizePolicy(sizePolicy3);
        startButterworthEcg->setIcon(icon1);

        horizontalLayout_30->addWidget(startButterworthEcg);

        stopButterworthEcg = new QPushButton(verticalFrame_5);
        stopButterworthEcg->setObjectName(QString::fromUtf8("stopButterworthEcg"));
        stopButterworthEcg->setEnabled(false);
        sizePolicy3.setHeightForWidth(stopButterworthEcg->sizePolicy().hasHeightForWidth());
        stopButterworthEcg->setSizePolicy(sizePolicy3);
        stopButterworthEcg->setIcon(icon2);

        horizontalLayout_30->addWidget(stopButterworthEcg);


        verticalLayout_6->addLayout(horizontalLayout_30);

        line_19 = new QFrame(verticalFrame_5);
        line_19->setObjectName(QString::fromUtf8("line_19"));
        line_19->setFrameShadow(QFrame::Plain);
        line_19->setFrameShape(QFrame::HLine);

        verticalLayout_6->addWidget(line_19);

        label_57 = new QLabel(verticalFrame_5);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_57);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        label_58 = new QLabel(verticalFrame_5);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        horizontalLayout_31->addWidget(label_58);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer_9);

        windowSizeEcg = new QSpinBox(verticalFrame_5);
        windowSizeEcg->setObjectName(QString::fromUtf8("windowSizeEcg"));
        windowSizeEcg->setValue(20);

        horizontalLayout_31->addWidget(windowSizeEcg);

        label_59 = new QLabel(verticalFrame_5);
        label_59->setObjectName(QString::fromUtf8("label_59"));

        horizontalLayout_31->addWidget(label_59);


        verticalLayout_6->addLayout(horizontalLayout_31);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        label_60 = new QLabel(verticalFrame_5);
        label_60->setObjectName(QString::fromUtf8("label_60"));

        horizontalLayout_32->addWidget(label_60);

        activateDownsampleEcg = new QCheckBox(verticalFrame_5);
        activateDownsampleEcg->setObjectName(QString::fromUtf8("activateDownsampleEcg"));

        horizontalLayout_32->addWidget(activateDownsampleEcg);


        verticalLayout_6->addLayout(horizontalLayout_32);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        label_61 = new QLabel(verticalFrame_5);
        label_61->setObjectName(QString::fromUtf8("label_61"));

        horizontalLayout_33->addWidget(label_61);

        downsampleWindowEcg = new QSpinBox(verticalFrame_5);
        downsampleWindowEcg->setObjectName(QString::fromUtf8("downsampleWindowEcg"));
        downsampleWindowEcg->setEnabled(false);
        downsampleWindowEcg->setValue(40);

        horizontalLayout_33->addWidget(downsampleWindowEcg);

        label_62 = new QLabel(verticalFrame_5);
        label_62->setObjectName(QString::fromUtf8("label_62"));

        horizontalLayout_33->addWidget(label_62);


        verticalLayout_6->addLayout(horizontalLayout_33);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setSpacing(6);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        startAverageEcg = new QPushButton(verticalFrame_5);
        startAverageEcg->setObjectName(QString::fromUtf8("startAverageEcg"));
        startAverageEcg->setEnabled(false);
        sizePolicy3.setHeightForWidth(startAverageEcg->sizePolicy().hasHeightForWidth());
        startAverageEcg->setSizePolicy(sizePolicy3);
        startAverageEcg->setIcon(icon1);

        horizontalLayout_34->addWidget(startAverageEcg);

        stopAverageEcg = new QPushButton(verticalFrame_5);
        stopAverageEcg->setObjectName(QString::fromUtf8("stopAverageEcg"));
        stopAverageEcg->setEnabled(false);
        sizePolicy3.setHeightForWidth(stopAverageEcg->sizePolicy().hasHeightForWidth());
        stopAverageEcg->setSizePolicy(sizePolicy3);
        stopAverageEcg->setIcon(icon2);

        horizontalLayout_34->addWidget(stopAverageEcg);


        verticalLayout_6->addLayout(horizontalLayout_34);

        line_20 = new QFrame(verticalFrame_5);
        line_20->setObjectName(QString::fromUtf8("line_20"));
        line_20->setFrameShadow(QFrame::Plain);
        line_20->setFrameShape(QFrame::HLine);

        verticalLayout_6->addWidget(line_20);

        label_64 = new QLabel(verticalFrame_5);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_64);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        label_70 = new QLabel(verticalFrame_5);
        label_70->setObjectName(QString::fromUtf8("label_70"));

        horizontalLayout_36->addWidget(label_70);

        envelopeWindowEcg = new QSpinBox(verticalFrame_5);
        envelopeWindowEcg->setObjectName(QString::fromUtf8("envelopeWindowEcg"));
        envelopeWindowEcg->setValue(0);

        horizontalLayout_36->addWidget(envelopeWindowEcg);

        label_71 = new QLabel(verticalFrame_5);
        label_71->setObjectName(QString::fromUtf8("label_71"));

        horizontalLayout_36->addWidget(label_71);


        verticalLayout_6->addLayout(horizontalLayout_36);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(6);
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        label_72 = new QLabel(verticalFrame_5);
        label_72->setObjectName(QString::fromUtf8("label_72"));

        horizontalLayout_37->addWidget(label_72);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_10);

        minValueEcg = new QDoubleSpinBox(verticalFrame_5);
        minValueEcg->setObjectName(QString::fromUtf8("minValueEcg"));
        minValueEcg->setValue(0.1);

        horizontalLayout_37->addWidget(minValueEcg);

        label_73 = new QLabel(verticalFrame_5);
        label_73->setObjectName(QString::fromUtf8("label_73"));

        horizontalLayout_37->addWidget(label_73);


        verticalLayout_6->addLayout(horizontalLayout_37);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        label_79 = new QLabel(verticalFrame_5);
        label_79->setObjectName(QString::fromUtf8("label_79"));

        horizontalLayout_39->addWidget(label_79);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_11);

        maxValueEcg = new QDoubleSpinBox(verticalFrame_5);
        maxValueEcg->setObjectName(QString::fromUtf8("maxValueEcg"));
        maxValueEcg->setValue(1.5);

        horizontalLayout_39->addWidget(maxValueEcg);

        label_80 = new QLabel(verticalFrame_5);
        label_80->setObjectName(QString::fromUtf8("label_80"));

        horizontalLayout_39->addWidget(label_80);


        verticalLayout_6->addLayout(horizontalLayout_39);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        label_74 = new QLabel(verticalFrame_5);
        label_74->setObjectName(QString::fromUtf8("label_74"));

        horizontalLayout_38->addWidget(label_74);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_4);

        thresholdEcg = new QDoubleSpinBox(verticalFrame_5);
        thresholdEcg->setObjectName(QString::fromUtf8("thresholdEcg"));
        thresholdEcg->setMaximum(6);
        thresholdEcg->setSingleStep(0.15);
        thresholdEcg->setValue(0.35);

        horizontalLayout_38->addWidget(thresholdEcg);

        label_78 = new QLabel(verticalFrame_5);
        label_78->setObjectName(QString::fromUtf8("label_78"));

        horizontalLayout_38->addWidget(label_78);


        verticalLayout_6->addLayout(horizontalLayout_38);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        label_83 = new QLabel(verticalFrame_5);
        label_83->setObjectName(QString::fromUtf8("label_83"));

        horizontalLayout_41->addWidget(label_83);

        intervaloEcg = new QSpinBox(verticalFrame_5);
        intervaloEcg->setObjectName(QString::fromUtf8("intervaloEcg"));
        intervaloEcg->setValue(10);

        horizontalLayout_41->addWidget(intervaloEcg);

        label_84 = new QLabel(verticalFrame_5);
        label_84->setObjectName(QString::fromUtf8("label_84"));

        horizontalLayout_41->addWidget(label_84);


        verticalLayout_6->addLayout(horizontalLayout_41);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        startDetectionEcg = new QPushButton(verticalFrame_5);
        startDetectionEcg->setObjectName(QString::fromUtf8("startDetectionEcg"));
        startDetectionEcg->setEnabled(false);
        sizePolicy3.setHeightForWidth(startDetectionEcg->sizePolicy().hasHeightForWidth());
        startDetectionEcg->setSizePolicy(sizePolicy3);
        startDetectionEcg->setIcon(icon1);

        horizontalLayout_35->addWidget(startDetectionEcg);

        stopDetectionEcg = new QPushButton(verticalFrame_5);
        stopDetectionEcg->setObjectName(QString::fromUtf8("stopDetectionEcg"));
        stopDetectionEcg->setEnabled(false);
        sizePolicy3.setHeightForWidth(stopDetectionEcg->sizePolicy().hasHeightForWidth());
        stopDetectionEcg->setSizePolicy(sizePolicy3);
        stopDetectionEcg->setIcon(icon2);

        horizontalLayout_35->addWidget(stopDetectionEcg);


        verticalLayout_6->addLayout(horizontalLayout_35);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        line_21 = new QFrame(verticalFrame_5);
        line_21->setObjectName(QString::fromUtf8("line_21"));
        line_21->setFrameShadow(QFrame::Plain);
        line_21->setFrameShape(QFrame::HLine);

        verticalLayout_6->addWidget(line_21);

        label_75 = new QLabel(verticalFrame_5);
        label_75->setObjectName(QString::fromUtf8("label_75"));
        sizePolicy4.setHeightForWidth(label_75->sizePolicy().hasHeightForWidth());
        label_75->setSizePolicy(sizePolicy4);
        label_75->setMaximumSize(QSize(16777215, 100));
        label_75->setLineWidth(1);
        label_75->setMidLineWidth(0);
        label_75->setTextFormat(Qt::PlainText);
        label_75->setPixmap(QPixmap(QString::fromUtf8("icons/robolab.png")));
        label_75->setScaledContents(true);
        label_75->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_75->setWordWrap(true);

        verticalLayout_6->addWidget(label_75);

        lcdBpm = new QLCDNumber(tabEcgProcessor);
        lcdBpm->setObjectName(QString::fromUtf8("lcdBpm"));
        lcdBpm->setGeometry(QRect(760, 540, 171, 41));
        label_63 = new QLabel(tabEcgProcessor);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setGeometry(QRect(590, 550, 151, 31));
        resultEcg = new QLabel(tabEcgProcessor);
        resultEcg->setObjectName(QString::fromUtf8("resultEcg"));
        resultEcg->setGeometry(QRect(300, 620, 621, 61));
        resultEcg->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        resultEcg->setFrameShape(QFrame::Panel);
        resultEcg->setAlignment(Qt::AlignCenter);
        label_77 = new QLabel(tabEcgProcessor);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setGeometry(QRect(300, 600, 621, 20));
        label_77->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_8 = new QWidget(tabEcgProcessor);
        verticalLayoutWidget_8->setObjectName(QString::fromUtf8("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(300, 280, 611, 211));
        plotEcgPicos = new QVBoxLayout(verticalLayoutWidget_8);
        plotEcgPicos->setSpacing(6);
        plotEcgPicos->setContentsMargins(11, 11, 11, 11);
        plotEcgPicos->setObjectName(QString::fromUtf8("plotEcgPicos"));
        plotEcgPicos->setContentsMargins(0, 0, 0, 0);
        label_66 = new QLabel(tabEcgProcessor);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setGeometry(QRect(300, 250, 251, 17));
        peakDetectedEcg = new QLabel(tabEcgProcessor);
        peakDetectedEcg->setObjectName(QString::fromUtf8("peakDetectedEcg"));
        peakDetectedEcg->setGeometry(QRect(940, 340, 51, 51));
        sizePolicy4.setHeightForWidth(peakDetectedEcg->sizePolicy().hasHeightForWidth());
        peakDetectedEcg->setSizePolicy(sizePolicy4);
        peakDetectedEcg->setMaximumSize(QSize(16777215, 100));
        peakDetectedEcg->setLineWidth(1);
        peakDetectedEcg->setMidLineWidth(0);
        peakDetectedEcg->setTextFormat(Qt::PlainText);
        peakDetectedEcg->setPixmap(QPixmap(QString::fromUtf8("icons/green-led-off.png")));
        peakDetectedEcg->setScaledContents(true);
        peakDetectedEcg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        peakDetectedEcg->setWordWrap(true);
        label_81 = new QLabel(tabEcgProcessor);
        label_81->setObjectName(QString::fromUtf8("label_81"));
        label_81->setGeometry(QRect(920, 310, 111, 20));
        label_82 = new QLabel(tabEcgProcessor);
        label_82->setObjectName(QString::fromUtf8("label_82"));
        label_82->setGeometry(QRect(920, 400, 101, 20));
        peakCounterEcg = new QLCDNumber(tabEcgProcessor);
        peakCounterEcg->setObjectName(QString::fromUtf8("peakCounterEcg"));
        peakCounterEcg->setEnabled(true);
        peakCounterEcg->setGeometry(QRect(920, 430, 91, 31));
        tabWidget->addTab(tabEcgProcessor, QString());
        RoboSignals->setCentralWidget(centralWidget);

        retranslateUi(RoboSignals);

        tabWidget->setCurrentIndex(0);
        channelListAccX->setCurrentIndex(1);
        channelListAccY->setCurrentIndex(2);
        channelListAccZ->setCurrentIndex(3);
        channelListEcg->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(RoboSignals);
    } // setupUi

    void retranslateUi(QMainWindow *RoboSignals)
    {
        RoboSignals->setWindowTitle(QApplication::translate("RoboSignals", "Robolab Biosignals - Adri\303\241n Tinoco", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RoboSignals", "Bitalino's Connection Panel", 0, QApplication::UnicodeUTF8));
        macList->clear();
        macList->insertItems(0, QStringList()
         << QApplication::translate("RoboSignals", "98:D3:31:B2:C0:96", 0, QApplication::UnicodeUTF8)
        );
        nuevaMac->setText(QApplication::translate("RoboSignals", "+", 0, QApplication::UnicodeUTF8));
        connectionButton->setText(QString());
        connectionLabel->setText(QApplication::translate("RoboSignals", "Connection Status", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        connectionIconLabel->setText(QString());
        label_4->setText(QApplication::translate("RoboSignals", "Channel and Sensor Type:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("RoboSignals", "Sensor type", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("RoboSignals", "Analog Channel", 0, QApplication::UnicodeUTF8));
        checkBoxEmg->setText(QApplication::translate("RoboSignals", "EMG: ", 0, QApplication::UnicodeUTF8));
        channelListEmg->clear();
        channelListEmg->insertItems(0, QStringList()
         << QApplication::translate("RoboSignals", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "6", 0, QApplication::UnicodeUTF8)
        );
        checkBoxAccX->setText(QApplication::translate("RoboSignals", "ACC X:", 0, QApplication::UnicodeUTF8));
        channelListAccX->clear();
        channelListAccX->insertItems(0, QStringList()
         << QApplication::translate("RoboSignals", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "6", 0, QApplication::UnicodeUTF8)
        );
        checkBoxAccY->setText(QApplication::translate("RoboSignals", "ACC Y:", 0, QApplication::UnicodeUTF8));
        channelListAccY->clear();
        channelListAccY->insertItems(0, QStringList()
         << QApplication::translate("RoboSignals", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "6", 0, QApplication::UnicodeUTF8)
        );
        checkBoxAccZ->setText(QApplication::translate("RoboSignals", "ACC Z:", 0, QApplication::UnicodeUTF8));
        channelListAccZ->clear();
        channelListAccZ->insertItems(0, QStringList()
         << QApplication::translate("RoboSignals", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "6", 0, QApplication::UnicodeUTF8)
        );
        checkBoxEcg->setText(QApplication::translate("RoboSignals", "ECG:", 0, QApplication::UnicodeUTF8));
        channelListEcg->clear();
        channelListEcg->insertItems(0, QStringList()
         << QApplication::translate("RoboSignals", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "6", 0, QApplication::UnicodeUTF8)
        );
        startButton->setText(QString());
        stopButton->setText(QString());
        label_8->setText(QApplication::translate("RoboSignals", "Data Capture:", 0, QApplication::UnicodeUTF8));
        channelListCapture->clear();
        channelListCapture->insertItems(0, QStringList()
         << QApplication::translate("RoboSignals", "EMG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "ACC X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "ACC Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "ACC Z", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "ECG", 0, QApplication::UnicodeUTF8)
        );
        startCapture->setText(QString());
        stopCapture->setText(QString());
        label_86->setText(QApplication::translate("RoboSignals", "Robot Debug Controls:", 0, QApplication::UnicodeUTF8));
        startDebug->setText(QString());
        stopDebug->setText(QString());
        label_7->setText(QString());
        result->setText(QString());
        label_3->setText(QApplication::translate("RoboSignals", "Information:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("RoboSignals", "EMG:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("RoboSignals", "ACC X:", 0, QApplication::UnicodeUTF8));
        label_99->setText(QApplication::translate("RoboSignals", "ACC Y:", 0, QApplication::UnicodeUTF8));
        label_100->setText(QApplication::translate("RoboSignals", "ACC Z:", 0, QApplication::UnicodeUTF8));
        masEscalaEmgPpal->setText(QApplication::translate("RoboSignals", "+", 0, QApplication::UnicodeUTF8));
        menosEscalaEmgPpal->setText(QApplication::translate("RoboSignals", "-", 0, QApplication::UnicodeUTF8));
        label_65->setText(QApplication::translate("RoboSignals", "ECG:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabConnection), QApplication::translate("RoboSignals", "Connection", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("RoboSignals", "Filtered EMG Signal:", 0, QApplication::UnicodeUTF8));
        resultEmgProcessor->setText(QString());
        label_30->setText(QApplication::translate("RoboSignals", "Peak Detection:", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("RoboSignals", "EMG Processing Panel", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("RoboSignals", "Add filter to the signal:", 0, QApplication::UnicodeUTF8));
        filterList->clear();
        filterList->insertItems(0, QStringList()
         << QApplication::translate("RoboSignals", "Butterworth 6th Order 40Hzs ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "Butterworth 6th Order 100Hzs ", 0, QApplication::UnicodeUTF8)
        );
        startButterworth->setText(QString());
        stopButterworth->setText(QString());
        label_25->setText(QApplication::translate("RoboSignals", "Add moving average filter:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("RoboSignals", "Window size:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("RoboSignals", "Samples", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("RoboSignals", "Activate downsample:", 0, QApplication::UnicodeUTF8));
        activateDownsample->setText(QString());
        label_32->setText(QApplication::translate("RoboSignals", "Read every ", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("RoboSignals", "Samples", 0, QApplication::UnicodeUTF8));
        startAverage->setText(QString());
        stopAverage->setText(QString());
        label_26->setText(QApplication::translate("RoboSignals", "Start Peak Detection:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("RoboSignals", "Envelope window: ", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("RoboSignals", "Bins", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("RoboSignals", "Min Value:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("RoboSignals", "Volt. ", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("RoboSignals", "Max Value:  ", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("RoboSignals", "Volt. ", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("RoboSignals", "Threshold:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("RoboSignals", "Volt. ", 0, QApplication::UnicodeUTF8));
        calibrationButtonEmg->setText(QApplication::translate("RoboSignals", "Calibrate", 0, QApplication::UnicodeUTF8));
        label_85->setText(QApplication::translate("RoboSignals", "Time (secs):", 0, QApplication::UnicodeUTF8));
        startDetection->setText(QString());
        stopDetection->setText(QString());
        label_29->setText(QString());
        label_22->setText(QApplication::translate("RoboSignals", "Information:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("RoboSignals", "Peak Detected:", 0, QApplication::UnicodeUTF8));
        peakDetected->setText(QString());
        label_28->setText(QApplication::translate("RoboSignals", "Peak Counter:", 0, QApplication::UnicodeUTF8));
        menosEscalaEmgProcesado->setText(QApplication::translate("RoboSignals", "-", 0, QApplication::UnicodeUTF8));
        masEscalaEmgProcesado->setText(QApplication::translate("RoboSignals", "+", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabEmgProcessor), QApplication::translate("RoboSignals", "EMG Signal Processing", 0, QApplication::UnicodeUTF8));
        label_67->setText(QApplication::translate("RoboSignals", "Y Axis:", 0, QApplication::UnicodeUTF8));
        label_68->setText(QApplication::translate("RoboSignals", "X Axis:", 0, QApplication::UnicodeUTF8));
        resultAcc->setText(QString());
        label_76->setText(QApplication::translate("RoboSignals", "Information:", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("RoboSignals", "ACC Processing Panel", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("RoboSignals", "Apply to:", 0, QApplication::UnicodeUTF8));
        checkBoxFilterAccX->setText(QApplication::translate("RoboSignals", "Axis X", 0, QApplication::UnicodeUTF8));
        checkBoxFilterAccY->setText(QApplication::translate("RoboSignals", "Axis Y", 0, QApplication::UnicodeUTF8));
        checkBoxFilterAccZ->setText(QApplication::translate("RoboSignals", "Axis Z", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("RoboSignals", "Add filter to the signals:", 0, QApplication::UnicodeUTF8));
        filterListAcc->clear();
        filterListAcc->insertItems(0, QStringList()
         << QApplication::translate("RoboSignals", "Butterworth 6th Order 40Hzs ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "Butterworth 6th Order 100Hzs ", 0, QApplication::UnicodeUTF8)
        );
        startButterworthAcc->setText(QString());
        stopButterworthAcc->setText(QString());
        label_36->setText(QApplication::translate("RoboSignals", "Add moving average filter:", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("RoboSignals", "Window size:", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("RoboSignals", "Samples", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("RoboSignals", "Activate downsample:", 0, QApplication::UnicodeUTF8));
        activateDownsampleAcc->setText(QString());
        label_40->setText(QApplication::translate("RoboSignals", "Read every ", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("RoboSignals", "Samples", 0, QApplication::UnicodeUTF8));
        startAverageAcc->setText(QString());
        stopAverageAcc->setText(QString());
        label_45->setText(QApplication::translate("RoboSignals", "Position detection:", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("RoboSignals", "Threshold ACC X:", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("RoboSignals", "G", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("RoboSignals", "Threshold ACC Y:", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("RoboSignals", "G", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("RoboSignals", "Threshold ACC Z:", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("RoboSignals", "G", 0, QApplication::UnicodeUTF8));
        startDetectionAcc->setText(QString());
        stopDetectionAcc->setText(QString());
        label_51->setText(QString());
        label_69->setText(QApplication::translate("RoboSignals", "Z Axis:", 0, QApplication::UnicodeUTF8));
        label_50->setText(QApplication::translate("RoboSignals", "Change Detected:", 0, QApplication::UnicodeUTF8));
        ledAccX->setText(QString());
        ledAccY->setText(QString());
        label_52->setText(QApplication::translate("RoboSignals", "Change Detected:", 0, QApplication::UnicodeUTF8));
        ledAccZ->setText(QString());
        label_53->setText(QApplication::translate("RoboSignals", "Change Detected:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabAccProcessor), QApplication::translate("RoboSignals", "ACC Signal Processing", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("RoboSignals", "Filtered ECG Signal:", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("RoboSignals", "ECG Processing Panel", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("RoboSignals", "Add filter to the signal:", 0, QApplication::UnicodeUTF8));
        filterListEcg->clear();
        filterListEcg->insertItems(0, QStringList()
         << QApplication::translate("RoboSignals", "Butterworth 6th Order 40Hzs ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RoboSignals", "Butterworth 6th Order 100Hzs ", 0, QApplication::UnicodeUTF8)
        );
        startButterworthEcg->setText(QString());
        stopButterworthEcg->setText(QString());
        label_57->setText(QApplication::translate("RoboSignals", "Add moving average filter:", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("RoboSignals", "Window size:", 0, QApplication::UnicodeUTF8));
        label_59->setText(QApplication::translate("RoboSignals", "Samples", 0, QApplication::UnicodeUTF8));
        label_60->setText(QApplication::translate("RoboSignals", "Activate downsample:", 0, QApplication::UnicodeUTF8));
        activateDownsampleEcg->setText(QString());
        label_61->setText(QApplication::translate("RoboSignals", "Read every ", 0, QApplication::UnicodeUTF8));
        label_62->setText(QApplication::translate("RoboSignals", "Samples", 0, QApplication::UnicodeUTF8));
        startAverageEcg->setText(QString());
        stopAverageEcg->setText(QString());
        label_64->setText(QApplication::translate("RoboSignals", "Start Heart Rate Analysis:", 0, QApplication::UnicodeUTF8));
        label_70->setText(QApplication::translate("RoboSignals", "Envelope window: ", 0, QApplication::UnicodeUTF8));
        label_71->setText(QApplication::translate("RoboSignals", "Bins", 0, QApplication::UnicodeUTF8));
        label_72->setText(QApplication::translate("RoboSignals", "Min Value:", 0, QApplication::UnicodeUTF8));
        label_73->setText(QApplication::translate("RoboSignals", "Volt. ", 0, QApplication::UnicodeUTF8));
        label_79->setText(QApplication::translate("RoboSignals", "Max Value:  ", 0, QApplication::UnicodeUTF8));
        label_80->setText(QApplication::translate("RoboSignals", "Volt. ", 0, QApplication::UnicodeUTF8));
        label_74->setText(QApplication::translate("RoboSignals", "Threshold:", 0, QApplication::UnicodeUTF8));
        label_78->setText(QApplication::translate("RoboSignals", "Volt. ", 0, QApplication::UnicodeUTF8));
        label_83->setText(QApplication::translate("RoboSignals", "BPM every: ", 0, QApplication::UnicodeUTF8));
        label_84->setText(QApplication::translate("RoboSignals", "Seconds", 0, QApplication::UnicodeUTF8));
        startDetectionEcg->setText(QString());
        stopDetectionEcg->setText(QString());
        label_75->setText(QString());
        label_63->setText(QApplication::translate("RoboSignals", "Heart Rate (BPM):", 0, QApplication::UnicodeUTF8));
        resultEcg->setText(QString());
        label_77->setText(QApplication::translate("RoboSignals", "Information:", 0, QApplication::UnicodeUTF8));
        label_66->setText(QApplication::translate("RoboSignals", "Peak Detection:", 0, QApplication::UnicodeUTF8));
        peakDetectedEcg->setText(QString());
        label_81->setText(QApplication::translate("RoboSignals", "Peak Detected:", 0, QApplication::UnicodeUTF8));
        label_82->setText(QApplication::translate("RoboSignals", "Peak Counter:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabEcgProcessor), QApplication::translate("RoboSignals", "ECG Signal Processing", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RoboSignals: public Ui_RoboSignals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
