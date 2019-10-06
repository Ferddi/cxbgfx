/********************************************************************************
** Form generated from reading UI file 'prefsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFSDIALOG_H
#define UI_PREFSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "colorswatch.h"

QT_BEGIN_NAMESPACE

class Ui_PrefsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *page_themes;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *grpUI;
    QGridLayout *gridLayout_5;
    QFormLayout *formLayout_5;
    QLabel *themeLabel;
    QComboBox *themeWidget;
    QLabel *console1ColorLabel;
    ColorSwatch *console1ColorWidget;
    QLabel *console2ColorLabel;
    ColorSwatch *console2ColorWidget;
    QLabel *console3ColorLabel;
    ColorSwatch *console3ColorWidget;
    QLabel *console4ColorLabel;
    ColorSwatch *console4ColorWidget;
    QLabel *lineNumberColorLabel;
    ColorSwatch *lineNumberColorWidget;
    QGroupBox *grpColors;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *backgroundColorLabel;
    ColorSwatch *backgroundColorWidget;
    QLabel *defaultColorLabel;
    ColorSwatch *defaultColorWidget;
    QLabel *highlightColorLabel;
    ColorSwatch *highlightColorWidget;
    QLabel *numbersColorLabel;
    ColorSwatch *numbersColorWidget;
    QLabel *stringsColorLabel;
    ColorSwatch *stringsColorWidget;
    ColorSwatch *identifiersColorWidget;
    QLabel *keywordsColorLabel;
    ColorSwatch *keywordsColorWidget;
    QLabel *keywords2ColorLabel;
    ColorSwatch *keywords2ColorWidget;
    QLabel *commentsColorLabel;
    ColorSwatch *commentsColorWidget;
    QLabel *identifiersColorLabel;
    QSpacerItem *verticalSpacer;
    QWidget *page_editor;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *grpOptions;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QFormLayout *formLayout_3;
    QLabel *familyLabel;
    QFontComboBox *fontComboBox;
    QLabel *pointSizeLabel;
    QSpinBox *fontSizeWidget;
    QLabel *tabSizeLabel_2;
    QSpinBox *tabSizeWidget;
    QLabel *tabs4spacesLabel;
    QCheckBox *tabs4spacesWidget;
    QLabel *smoothFontsLabel;
    QCheckBox *smoothFontsWidget;
    QLabel *highlightLabel;
    QCheckBox *highlightCaretRowWidget;
    QCheckBox *highlightCaretWordWidget;
    QCheckBox *highlightBracketsWidget;
    QLabel *capitalizeAPILabel;
    QCheckBox *capitalizeAPIWidget;
    QLabel *showLineNumbersLabel;
    QCheckBox *showLineNumbersWidget;
    QLabel *sortCodeBrowserLabel;
    QCheckBox *sortCodeBrowserWidget;
    QWidget *page_toolPath;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *grpTools;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_7;
    QLabel *blitzMaxLabel;
    QLineEdit *cerberusPathWidget;
    QLabel *cerberusLabel;
    QToolButton *cerberusPathButton;
    QLineEdit *blitzmaxPathWidget;
    QToolButton *blitzmaxPathButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnLoadColors;
    QPushButton *btnSaveColors;
    QSpacerItem *horizontalSpacer;
    QPushButton *okayButton;

    void setupUi(QDialog *PrefsDialog)
    {
        if (PrefsDialog->objectName().isEmpty())
            PrefsDialog->setObjectName(QStringLiteral("PrefsDialog"));
        PrefsDialog->resize(631, 394);
        PrefsDialog->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(PrefsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        toolBox = new QToolBox(PrefsDialog);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setEnabled(true);
        page_themes = new QWidget();
        page_themes->setObjectName(QStringLiteral("page_themes"));
        page_themes->setGeometry(QRect(0, 0, 596, 386));
        verticalLayout_2 = new QVBoxLayout(page_themes);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        grpUI = new QGroupBox(page_themes);
        grpUI->setObjectName(QStringLiteral("grpUI"));
        gridLayout_5 = new QGridLayout(grpUI);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(9, -1, 9, -1);
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        themeLabel = new QLabel(grpUI);
        themeLabel->setObjectName(QStringLiteral("themeLabel"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, themeLabel);

        themeWidget = new QComboBox(grpUI);
        themeWidget->setObjectName(QStringLiteral("themeWidget"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, themeWidget);

        console1ColorLabel = new QLabel(grpUI);
        console1ColorLabel->setObjectName(QStringLiteral("console1ColorLabel"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, console1ColorLabel);

        console1ColorWidget = new ColorSwatch(grpUI);
        console1ColorWidget->setObjectName(QStringLiteral("console1ColorWidget"));
        console1ColorWidget->setAutoFillBackground(true);
        console1ColorWidget->setStyleSheet(QStringLiteral(""));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, console1ColorWidget);

        console2ColorLabel = new QLabel(grpUI);
        console2ColorLabel->setObjectName(QStringLiteral("console2ColorLabel"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, console2ColorLabel);

        console2ColorWidget = new ColorSwatch(grpUI);
        console2ColorWidget->setObjectName(QStringLiteral("console2ColorWidget"));
        console2ColorWidget->setStyleSheet(QStringLiteral(""));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, console2ColorWidget);

        console3ColorLabel = new QLabel(grpUI);
        console3ColorLabel->setObjectName(QStringLiteral("console3ColorLabel"));

        formLayout_5->setWidget(4, QFormLayout::LabelRole, console3ColorLabel);

        console3ColorWidget = new ColorSwatch(grpUI);
        console3ColorWidget->setObjectName(QStringLiteral("console3ColorWidget"));
        console3ColorWidget->setStyleSheet(QStringLiteral(""));

        formLayout_5->setWidget(4, QFormLayout::FieldRole, console3ColorWidget);

        console4ColorLabel = new QLabel(grpUI);
        console4ColorLabel->setObjectName(QStringLiteral("console4ColorLabel"));

        formLayout_5->setWidget(5, QFormLayout::LabelRole, console4ColorLabel);

        console4ColorWidget = new ColorSwatch(grpUI);
        console4ColorWidget->setObjectName(QStringLiteral("console4ColorWidget"));
        console4ColorWidget->setStyleSheet(QStringLiteral(""));

        formLayout_5->setWidget(5, QFormLayout::FieldRole, console4ColorWidget);

        lineNumberColorLabel = new QLabel(grpUI);
        lineNumberColorLabel->setObjectName(QStringLiteral("lineNumberColorLabel"));
        lineNumberColorLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_5->setWidget(6, QFormLayout::LabelRole, lineNumberColorLabel);

        lineNumberColorWidget = new ColorSwatch(grpUI);
        lineNumberColorWidget->setObjectName(QStringLiteral("lineNumberColorWidget"));
        lineNumberColorWidget->setStyleSheet(QStringLiteral(""));

        formLayout_5->setWidget(6, QFormLayout::FieldRole, lineNumberColorWidget);


        gridLayout_5->addLayout(formLayout_5, 1, 0, 1, 1);


        verticalLayout_2->addWidget(grpUI);

        grpColors = new QGroupBox(page_themes);
        grpColors->setObjectName(QStringLiteral("grpColors"));
        grpColors->setFlat(false);
        gridLayout = new QGridLayout(grpColors);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, -1, 9, -1);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        backgroundColorLabel = new QLabel(grpColors);
        backgroundColorLabel->setObjectName(QStringLiteral("backgroundColorLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, backgroundColorLabel);

        backgroundColorWidget = new ColorSwatch(grpColors);
        backgroundColorWidget->setObjectName(QStringLiteral("backgroundColorWidget"));
        backgroundColorWidget->setStyleSheet(QStringLiteral(""));

        formLayout->setWidget(0, QFormLayout::FieldRole, backgroundColorWidget);

        defaultColorLabel = new QLabel(grpColors);
        defaultColorLabel->setObjectName(QStringLiteral("defaultColorLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, defaultColorLabel);

        defaultColorWidget = new ColorSwatch(grpColors);
        defaultColorWidget->setObjectName(QStringLiteral("defaultColorWidget"));
        defaultColorWidget->setStyleSheet(QStringLiteral("QToolTip { color: #ffffff; background-color: #000000; border: 0px; }"));

        formLayout->setWidget(1, QFormLayout::FieldRole, defaultColorWidget);

        highlightColorLabel = new QLabel(grpColors);
        highlightColorLabel->setObjectName(QStringLiteral("highlightColorLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, highlightColorLabel);

        highlightColorWidget = new ColorSwatch(grpColors);
        highlightColorWidget->setObjectName(QStringLiteral("highlightColorWidget"));
        highlightColorWidget->setStyleSheet(QStringLiteral(""));

        formLayout->setWidget(2, QFormLayout::FieldRole, highlightColorWidget);

        numbersColorLabel = new QLabel(grpColors);
        numbersColorLabel->setObjectName(QStringLiteral("numbersColorLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, numbersColorLabel);

        numbersColorWidget = new ColorSwatch(grpColors);
        numbersColorWidget->setObjectName(QStringLiteral("numbersColorWidget"));
        numbersColorWidget->setStyleSheet(QStringLiteral(""));

        formLayout->setWidget(3, QFormLayout::FieldRole, numbersColorWidget);

        stringsColorLabel = new QLabel(grpColors);
        stringsColorLabel->setObjectName(QStringLiteral("stringsColorLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, stringsColorLabel);

        stringsColorWidget = new ColorSwatch(grpColors);
        stringsColorWidget->setObjectName(QStringLiteral("stringsColorWidget"));

        formLayout->setWidget(4, QFormLayout::FieldRole, stringsColorWidget);

        identifiersColorWidget = new ColorSwatch(grpColors);
        identifiersColorWidget->setObjectName(QStringLiteral("identifiersColorWidget"));
        identifiersColorWidget->setStyleSheet(QStringLiteral(""));

        formLayout->setWidget(5, QFormLayout::FieldRole, identifiersColorWidget);

        keywordsColorLabel = new QLabel(grpColors);
        keywordsColorLabel->setObjectName(QStringLiteral("keywordsColorLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, keywordsColorLabel);

        keywordsColorWidget = new ColorSwatch(grpColors);
        keywordsColorWidget->setObjectName(QStringLiteral("keywordsColorWidget"));
        keywordsColorWidget->setStyleSheet(QStringLiteral(""));

        formLayout->setWidget(6, QFormLayout::FieldRole, keywordsColorWidget);

        keywords2ColorLabel = new QLabel(grpColors);
        keywords2ColorLabel->setObjectName(QStringLiteral("keywords2ColorLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, keywords2ColorLabel);

        keywords2ColorWidget = new ColorSwatch(grpColors);
        keywords2ColorWidget->setObjectName(QStringLiteral("keywords2ColorWidget"));
        keywords2ColorWidget->setStyleSheet(QStringLiteral(""));

        formLayout->setWidget(7, QFormLayout::FieldRole, keywords2ColorWidget);

        commentsColorLabel = new QLabel(grpColors);
        commentsColorLabel->setObjectName(QStringLiteral("commentsColorLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, commentsColorLabel);

        commentsColorWidget = new ColorSwatch(grpColors);
        commentsColorWidget->setObjectName(QStringLiteral("commentsColorWidget"));
        commentsColorWidget->setStyleSheet(QStringLiteral(""));

        formLayout->setWidget(8, QFormLayout::FieldRole, commentsColorWidget);

        identifiersColorLabel = new QLabel(grpColors);
        identifiersColorLabel->setObjectName(QStringLiteral("identifiersColorLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, identifiersColorLabel);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(grpColors);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        toolBox->addItem(page_themes, QStringLiteral("IDE Theme and Color Options"));
        page_editor = new QWidget();
        page_editor->setObjectName(QStringLiteral("page_editor"));
        page_editor->setGeometry(QRect(0, 0, 596, 301));
        verticalLayout_4 = new QVBoxLayout(page_editor);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        grpOptions = new QGroupBox(page_editor);
        grpOptions->setObjectName(QStringLiteral("grpOptions"));
        gridLayout_2 = new QGridLayout(grpOptions);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 0, 1, 1);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        familyLabel = new QLabel(grpOptions);
        familyLabel->setObjectName(QStringLiteral("familyLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, familyLabel);

        fontComboBox = new QFontComboBox(grpOptions);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, fontComboBox);

        pointSizeLabel = new QLabel(grpOptions);
        pointSizeLabel->setObjectName(QStringLiteral("pointSizeLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, pointSizeLabel);

        fontSizeWidget = new QSpinBox(grpOptions);
        fontSizeWidget->setObjectName(QStringLiteral("fontSizeWidget"));
        fontSizeWidget->setValue(12);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, fontSizeWidget);

        tabSizeLabel_2 = new QLabel(grpOptions);
        tabSizeLabel_2->setObjectName(QStringLiteral("tabSizeLabel_2"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, tabSizeLabel_2);

        tabSizeWidget = new QSpinBox(grpOptions);
        tabSizeWidget->setObjectName(QStringLiteral("tabSizeWidget"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, tabSizeWidget);

        tabs4spacesLabel = new QLabel(grpOptions);
        tabs4spacesLabel->setObjectName(QStringLiteral("tabs4spacesLabel"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, tabs4spacesLabel);

        tabs4spacesWidget = new QCheckBox(grpOptions);
        tabs4spacesWidget->setObjectName(QStringLiteral("tabs4spacesWidget"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, tabs4spacesWidget);

        smoothFontsLabel = new QLabel(grpOptions);
        smoothFontsLabel->setObjectName(QStringLiteral("smoothFontsLabel"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, smoothFontsLabel);

        smoothFontsWidget = new QCheckBox(grpOptions);
        smoothFontsWidget->setObjectName(QStringLiteral("smoothFontsWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(smoothFontsWidget->sizePolicy().hasHeightForWidth());
        smoothFontsWidget->setSizePolicy(sizePolicy);
        smoothFontsWidget->setLayoutDirection(Qt::LeftToRight);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, smoothFontsWidget);

        highlightLabel = new QLabel(grpOptions);
        highlightLabel->setObjectName(QStringLiteral("highlightLabel"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, highlightLabel);

        highlightCaretRowWidget = new QCheckBox(grpOptions);
        highlightCaretRowWidget->setObjectName(QStringLiteral("highlightCaretRowWidget"));

        formLayout_3->setWidget(5, QFormLayout::FieldRole, highlightCaretRowWidget);

        highlightCaretWordWidget = new QCheckBox(grpOptions);
        highlightCaretWordWidget->setObjectName(QStringLiteral("highlightCaretWordWidget"));

        formLayout_3->setWidget(6, QFormLayout::FieldRole, highlightCaretWordWidget);

        highlightBracketsWidget = new QCheckBox(grpOptions);
        highlightBracketsWidget->setObjectName(QStringLiteral("highlightBracketsWidget"));

        formLayout_3->setWidget(7, QFormLayout::FieldRole, highlightBracketsWidget);

        capitalizeAPILabel = new QLabel(grpOptions);
        capitalizeAPILabel->setObjectName(QStringLiteral("capitalizeAPILabel"));

        formLayout_3->setWidget(8, QFormLayout::LabelRole, capitalizeAPILabel);

        capitalizeAPIWidget = new QCheckBox(grpOptions);
        capitalizeAPIWidget->setObjectName(QStringLiteral("capitalizeAPIWidget"));

        formLayout_3->setWidget(8, QFormLayout::FieldRole, capitalizeAPIWidget);

        showLineNumbersLabel = new QLabel(grpOptions);
        showLineNumbersLabel->setObjectName(QStringLiteral("showLineNumbersLabel"));

        formLayout_3->setWidget(10, QFormLayout::LabelRole, showLineNumbersLabel);

        showLineNumbersWidget = new QCheckBox(grpOptions);
        showLineNumbersWidget->setObjectName(QStringLiteral("showLineNumbersWidget"));

        formLayout_3->setWidget(10, QFormLayout::FieldRole, showLineNumbersWidget);

        sortCodeBrowserLabel = new QLabel(grpOptions);
        sortCodeBrowserLabel->setObjectName(QStringLiteral("sortCodeBrowserLabel"));

        formLayout_3->setWidget(11, QFormLayout::LabelRole, sortCodeBrowserLabel);

        sortCodeBrowserWidget = new QCheckBox(grpOptions);
        sortCodeBrowserWidget->setObjectName(QStringLiteral("sortCodeBrowserWidget"));

        formLayout_3->setWidget(11, QFormLayout::FieldRole, sortCodeBrowserWidget);


        gridLayout_2->addLayout(formLayout_3, 0, 0, 1, 1);


        verticalLayout_4->addWidget(grpOptions);

        toolBox->addItem(page_editor, QStringLiteral("IDE Code Editor Options"));
        page_toolPath = new QWidget();
        page_toolPath->setObjectName(QStringLiteral("page_toolPath"));
        page_toolPath->setGeometry(QRect(0, 0, 613, 264));
        verticalLayout_3 = new QVBoxLayout(page_toolPath);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        grpTools = new QGroupBox(page_toolPath);
        grpTools->setObjectName(QStringLiteral("grpTools"));
        verticalLayout_5 = new QVBoxLayout(grpTools);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        blitzMaxLabel = new QLabel(grpTools);
        blitzMaxLabel->setObjectName(QStringLiteral("blitzMaxLabel"));

        gridLayout_7->addWidget(blitzMaxLabel, 1, 0, 1, 1);

        cerberusPathWidget = new QLineEdit(grpTools);
        cerberusPathWidget->setObjectName(QStringLiteral("cerberusPathWidget"));
        cerberusPathWidget->setLayoutDirection(Qt::LeftToRight);
        cerberusPathWidget->setReadOnly(true);

        gridLayout_7->addWidget(cerberusPathWidget, 0, 1, 1, 1);

        cerberusLabel = new QLabel(grpTools);
        cerberusLabel->setObjectName(QStringLiteral("cerberusLabel"));

        gridLayout_7->addWidget(cerberusLabel, 0, 0, 1, 1);

        cerberusPathButton = new QToolButton(grpTools);
        cerberusPathButton->setObjectName(QStringLiteral("cerberusPathButton"));
        cerberusPathButton->setMaximumSize(QSize(24, 24));

        gridLayout_7->addWidget(cerberusPathButton, 0, 2, 1, 1);

        blitzmaxPathWidget = new QLineEdit(grpTools);
        blitzmaxPathWidget->setObjectName(QStringLiteral("blitzmaxPathWidget"));
        blitzmaxPathWidget->setReadOnly(true);

        gridLayout_7->addWidget(blitzmaxPathWidget, 1, 1, 1, 1);

        blitzmaxPathButton = new QToolButton(grpTools);
        blitzmaxPathButton->setObjectName(QStringLiteral("blitzmaxPathButton"));
        blitzmaxPathButton->setMaximumSize(QSize(24, 24));

        gridLayout_7->addWidget(blitzmaxPathButton, 1, 2, 1, 1);


        verticalLayout_5->addLayout(gridLayout_7);

        widget = new QWidget(grpTools);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout_5->addWidget(widget);

        widget_2 = new QWidget(grpTools);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);

        verticalLayout_5->addWidget(widget_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        verticalLayout_3->addWidget(grpTools);

        toolBox->addItem(page_toolPath, QStringLiteral("IDE Tool Path Options"));

        verticalLayout->addWidget(toolBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnLoadColors = new QPushButton(PrefsDialog);
        btnLoadColors->setObjectName(QStringLiteral("btnLoadColors"));

        horizontalLayout_3->addWidget(btnLoadColors);

        btnSaveColors = new QPushButton(PrefsDialog);
        btnSaveColors->setObjectName(QStringLiteral("btnSaveColors"));

        horizontalLayout_3->addWidget(btnSaveColors);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        okayButton = new QPushButton(PrefsDialog);
        okayButton->setObjectName(QStringLiteral("okayButton"));
        okayButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(okayButton);


        verticalLayout->addLayout(horizontalLayout_3);

#ifndef QT_NO_SHORTCUT
        console1ColorLabel->setBuddy(console1ColorWidget);
        console2ColorLabel->setBuddy(console2ColorWidget);
        console3ColorLabel->setBuddy(console3ColorWidget);
        console4ColorLabel->setBuddy(console4ColorWidget);
        lineNumberColorLabel->setBuddy(lineNumberColorWidget);
        backgroundColorLabel->setBuddy(backgroundColorWidget);
        defaultColorLabel->setBuddy(defaultColorWidget);
        highlightColorLabel->setBuddy(highlightColorWidget);
        numbersColorLabel->setBuddy(numbersColorWidget);
        stringsColorLabel->setBuddy(stringsColorWidget);
        keywordsColorLabel->setBuddy(keywordsColorWidget);
        keywords2ColorLabel->setBuddy(keywords2ColorWidget);
        commentsColorLabel->setBuddy(commentsColorWidget);
        identifiersColorLabel->setBuddy(identifiersColorWidget);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(themeWidget, fontComboBox);
        QWidget::setTabOrder(fontComboBox, fontSizeWidget);
        QWidget::setTabOrder(fontSizeWidget, tabSizeWidget);
        QWidget::setTabOrder(tabSizeWidget, tabs4spacesWidget);
        QWidget::setTabOrder(tabs4spacesWidget, smoothFontsWidget);
        QWidget::setTabOrder(smoothFontsWidget, highlightCaretRowWidget);
        QWidget::setTabOrder(highlightCaretRowWidget, highlightCaretWordWidget);
        QWidget::setTabOrder(highlightCaretWordWidget, highlightBracketsWidget);
        QWidget::setTabOrder(highlightBracketsWidget, capitalizeAPIWidget);
        QWidget::setTabOrder(capitalizeAPIWidget, showLineNumbersWidget);
        QWidget::setTabOrder(showLineNumbersWidget, sortCodeBrowserWidget);
        QWidget::setTabOrder(sortCodeBrowserWidget, cerberusPathWidget);
        QWidget::setTabOrder(cerberusPathWidget, cerberusPathButton);
        QWidget::setTabOrder(cerberusPathButton, blitzmaxPathWidget);
        QWidget::setTabOrder(blitzmaxPathWidget, blitzmaxPathButton);
        QWidget::setTabOrder(blitzmaxPathButton, btnLoadColors);
        QWidget::setTabOrder(btnLoadColors, btnSaveColors);
        QWidget::setTabOrder(btnSaveColors, okayButton);

        retranslateUi(PrefsDialog);
        QObject::connect(okayButton, SIGNAL(clicked()), PrefsDialog, SLOT(accept()));
        QObject::connect(btnSaveColors, SIGNAL(clicked()), PrefsDialog, SLOT(onSaveThemeColor()));
        QObject::connect(btnLoadColors, SIGNAL(clicked()), PrefsDialog, SLOT(onLoadThemeColor()));
        QObject::connect(highlightBracketsWidget, SIGNAL(toggled(bool)), PrefsDialog, SLOT(onHighlightBracketsChanged(bool)));
        QObject::connect(highlightCaretWordWidget, SIGNAL(toggled(bool)), PrefsDialog, SLOT(onHighlightCaretWordChanged(bool)));
        QObject::connect(cerberusPathButton, SIGNAL(clicked()), PrefsDialog, SLOT(onBrowseForPath()));
        QObject::connect(smoothFontsWidget, SIGNAL(toggled(bool)), PrefsDialog, SLOT(onSmoothFontsChanged(bool)));
        QObject::connect(numbersColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(fontSizeWidget, SIGNAL(valueChanged(int)), PrefsDialog, SLOT(onFontSizeChanged(int)));
        QObject::connect(defaultColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(sortCodeBrowserWidget, SIGNAL(toggled(bool)), PrefsDialog, SLOT(onSortCodeBrowserChanged(bool)));
        QObject::connect(themeWidget, SIGNAL(currentTextChanged(QString)), PrefsDialog, SLOT(onThemeChanged(QString)));
        QObject::connect(keywordsColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(showLineNumbersWidget, SIGNAL(toggled(bool)), PrefsDialog, SLOT(onShowLineNumbersChanged(bool)));
        QObject::connect(capitalizeAPIWidget, SIGNAL(clicked(bool)), PrefsDialog, SLOT(onCapitalizeAPIChanged(bool)));
        QObject::connect(highlightCaretRowWidget, SIGNAL(toggled(bool)), PrefsDialog, SLOT(onHighlightCaretRowChanged(bool)));
        QObject::connect(fontComboBox, SIGNAL(currentFontChanged(QFont)), PrefsDialog, SLOT(onFontChanged(QFont)));
        QObject::connect(highlightColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(commentsColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(tabs4spacesWidget, SIGNAL(toggled(bool)), PrefsDialog, SLOT(onTabs4SpacesChanged(bool)));
        QObject::connect(identifiersColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(console1ColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(lineNumberColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(backgroundColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(stringsColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(console3ColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(console2ColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(tabSizeWidget, SIGNAL(valueChanged(int)), PrefsDialog, SLOT(onTabSizeChanged(int)));
        QObject::connect(keywords2ColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(blitzmaxPathButton, SIGNAL(clicked()), PrefsDialog, SLOT(onBrowseForPath()));

        QMetaObject::connectSlotsByName(PrefsDialog);
    } // setupUi

    void retranslateUi(QDialog *PrefsDialog)
    {
        PrefsDialog->setWindowTitle(QApplication::translate("PrefsDialog", "Options", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        toolBox->setStatusTip(QApplication::translate("PrefsDialog", "IDE and code editor options.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        page_themes->setToolTip(QApplication::translate("PrefsDialog", "You can change the colors of the IDE and code editor here.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        grpUI->setTitle(QApplication::translate("PrefsDialog", "Theme", Q_NULLPTR));
        themeLabel->setText(QApplication::translate("PrefsDialog", "UI Theme", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        themeWidget->setToolTip(QApplication::translate("PrefsDialog", "Sets the UI theme", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        console1ColorLabel->setToolTip(QApplication::translate("PrefsDialog", "Set the color for the output created by the IDE in the output console.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        console1ColorLabel->setText(QApplication::translate("PrefsDialog", "Console IDE Information", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        console1ColorWidget->setToolTip(QApplication::translate("PrefsDialog", "Set the color for the output created by the IDE in the output console.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        console2ColorLabel->setToolTip(QApplication::translate("PrefsDialog", "Set the color for the default text created by all tools.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        console2ColorLabel->setText(QApplication::translate("PrefsDialog", "Console Default", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        console2ColorWidget->setToolTip(QApplication::translate("PrefsDialog", "Set the color for the default text created by all tools.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        console3ColorLabel->setToolTip(QApplication::translate("PrefsDialog", "Set the color for all error and information text created by all tools.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        console3ColorLabel->setText(QApplication::translate("PrefsDialog", "Console Information", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        console3ColorWidget->setToolTip(QApplication::translate("PrefsDialog", "Set the color for all error and information text created by all tools.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        console4ColorLabel->setToolTip(QApplication::translate("PrefsDialog", "Set the color for all process information text created by all tools.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        console4ColorLabel->setText(QApplication::translate("PrefsDialog", "Console Process Information", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        console4ColorWidget->setToolTip(QApplication::translate("PrefsDialog", "Set the color for all error and information text created by all tools.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineNumberColorLabel->setToolTip(QApplication::translate("PrefsDialog", "Set the color of the line number in the IDE code editor gutter.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lineNumberColorLabel->setText(QApplication::translate("PrefsDialog", "Editor Line numbers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineNumberColorWidget->setToolTip(QApplication::translate("PrefsDialog", "Set the color of the line number in the IDE code editor gutter.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        grpColors->setTitle(QApplication::translate("PrefsDialog", "Code Editor Colors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        backgroundColorLabel->setToolTip(QApplication::translate("PrefsDialog", "Set the default background color for the IDE code editor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        backgroundColorLabel->setText(QApplication::translate("PrefsDialog", "Background", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        backgroundColorWidget->setToolTip(QApplication::translate("PrefsDialog", "Set the default background color for the IDE code editor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        defaultColorLabel->setToolTip(QApplication::translate("PrefsDialog", "Set the color for the defaut foreground text in the IDE code editor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        defaultColorLabel->setText(QApplication::translate("PrefsDialog", "Default", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        defaultColorWidget->setToolTip(QApplication::translate("PrefsDialog", "Set the color for the defaut foreground text in the IDE code editor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        highlightColorLabel->setToolTip(QApplication::translate("PrefsDialog", "Set the color for the line highlighted line in the IDE code editor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        highlightColorLabel->setText(QApplication::translate("PrefsDialog", "Highlight", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        highlightColorWidget->setToolTip(QApplication::translate("PrefsDialog", "Set the color for the line highlighted line in the IDE code editor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        numbersColorLabel->setToolTip(QApplication::translate("PrefsDialog", "Set the color for numerical text in the IDE code editor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        numbersColorLabel->setText(QApplication::translate("PrefsDialog", "Numbers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        numbersColorWidget->setToolTip(QApplication::translate("PrefsDialog", "Set the color for numerical text in the IDE code editor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        stringsColorLabel->setToolTip(QApplication::translate("PrefsDialog", "Set the color for string text in the IDE code editor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        stringsColorLabel->setText(QApplication::translate("PrefsDialog", "Strings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        stringsColorWidget->setToolTip(QApplication::translate("PrefsDialog", "Set the color for string text in the IDE code editor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        identifiersColorWidget->setToolTip(QApplication::translate("PrefsDialog", "Set the color for code identifier text in the IDE code editor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        keywordsColorLabel->setToolTip(QApplication::translate("PrefsDialog", "Set the color for the CX language keywords in the IDE code editor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        keywordsColorLabel->setText(QApplication::translate("PrefsDialog", "Keywords", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        keywordsColorWidget->setToolTip(QApplication::translate("PrefsDialog", "Set the color for the CX language keywords in the IDE code editor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        keywords2ColorLabel->setText(QApplication::translate("PrefsDialog", "Keywords2", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        keywords2ColorWidget->setToolTip(QApplication::translate("PrefsDialog", "Color of the API", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        commentsColorLabel->setToolTip(QApplication::translate("PrefsDialog", "Set the color for comment text in the IDE code editor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        commentsColorLabel->setText(QApplication::translate("PrefsDialog", "Comments", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        commentsColorWidget->setToolTip(QApplication::translate("PrefsDialog", "Set the color for comment text in the IDE code editor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        identifiersColorLabel->setToolTip(QApplication::translate("PrefsDialog", "Set the color for code identifier text in the IDE code editor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        identifiersColorLabel->setText(QApplication::translate("PrefsDialog", "Identifiers", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_themes), QApplication::translate("PrefsDialog", "IDE Theme and Color Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        page_editor->setToolTip(QApplication::translate("PrefsDialog", "You can set the code editor's fonts, tabs, rendering style and a few other things.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        grpOptions->setTitle(QApplication::translate("PrefsDialog", "Code Editor Options", Q_NULLPTR));
        familyLabel->setText(QApplication::translate("PrefsDialog", "Font Family", Q_NULLPTR));
        pointSizeLabel->setText(QApplication::translate("PrefsDialog", "Font Size", Q_NULLPTR));
        tabSizeLabel_2->setText(QApplication::translate("PrefsDialog", "Tab size", Q_NULLPTR));
        tabs4spacesLabel->setText(QApplication::translate("PrefsDialog", "Tabs or Spaces", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tabs4spacesWidget->setToolTip(QApplication::translate("PrefsDialog", "Uses tabs instead of spaces", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabs4spacesWidget->setText(QString());
        smoothFontsLabel->setText(QApplication::translate("PrefsDialog", "Smooth fonts", Q_NULLPTR));
        highlightLabel->setText(QApplication::translate("PrefsDialog", "Highlight:", Q_NULLPTR));
        highlightCaretRowWidget->setText(QApplication::translate("PrefsDialog", "Caret Row", Q_NULLPTR));
        highlightCaretWordWidget->setText(QApplication::translate("PrefsDialog", "Word under caret", Q_NULLPTR));
        highlightBracketsWidget->setText(QApplication::translate("PrefsDialog", "Matching brackets", Q_NULLPTR));
        capitalizeAPILabel->setText(QApplication::translate("PrefsDialog", "Capitalize API", Q_NULLPTR));
        capitalizeAPIWidget->setText(QString());
        showLineNumbersLabel->setText(QApplication::translate("PrefsDialog", "Show line numbers", Q_NULLPTR));
        showLineNumbersWidget->setText(QString());
        sortCodeBrowserLabel->setText(QApplication::translate("PrefsDialog", "Sort Code Browser", Q_NULLPTR));
        sortCodeBrowserWidget->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_editor), QApplication::translate("PrefsDialog", "IDE Code Editor Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        page_toolPath->setToolTip(QApplication::translate("PrefsDialog", "You can set the path to external application here.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        grpTools->setTitle(QApplication::translate("PrefsDialog", "Tool Paths", Q_NULLPTR));
        blitzMaxLabel->setText(QApplication::translate("PrefsDialog", "BlitzMax", Q_NULLPTR));
        cerberusLabel->setText(QApplication::translate("PrefsDialog", "Cerberus", Q_NULLPTR));
        cerberusPathButton->setText(QApplication::translate("PrefsDialog", "...", Q_NULLPTR));
        blitzmaxPathButton->setText(QApplication::translate("PrefsDialog", "...", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_toolPath), QApplication::translate("PrefsDialog", "IDE Tool Path Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnLoadColors->setToolTip(QApplication::translate("PrefsDialog", "Load the editor colors from the theme", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnLoadColors->setText(QApplication::translate("PrefsDialog", "Load Colors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnSaveColors->setToolTip(QApplication::translate("PrefsDialog", "Save the editor colors with the theme", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnSaveColors->setText(QApplication::translate("PrefsDialog", "Save Colors", Q_NULLPTR));
        okayButton->setText(QApplication::translate("PrefsDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PrefsDialog: public Ui_PrefsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFSDIALOG_H
