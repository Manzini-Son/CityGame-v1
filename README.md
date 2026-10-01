### Step 1: Create a New Qt Project

1. **Open Qt Creator**.
2. **Select "New Project"** from the welcome screen.
3. Choose **"Qt Widgets Application"** and click **"Choose..."**.
4. Name your project (e.g., `CityGameAurora`) and select a suitable location.
5. Click **"Next"** and configure the project settings as needed (e.g., select the appropriate Qt version).
6. Click **"Finish"** to create the project.

### Step 2: Set Up the Project Structure

1. In the `CityGameAurora` project, you will have a default structure with files like `main.cpp`, `mainwindow.cpp`, `mainwindow.h`, and `mainwindow.ui`.
2. You will primarily work with `mainwindow.cpp` and `mainwindow.ui` to set the background.

### Step 3: Create the Aurora Background

1. **Create a new QMainWindow subclass**:
   - Right-click on the project in the `Projects` pane.
   - Select **Add New...** > **C++ Class**.
   - Name it `AuroraBackground` and set the base class to `QWidget`.

2. **Implement the AuroraBackground class**:
   - Open `aurorabackground.h` and define the class:

   ```cpp
   #ifndef AURORABACKGROUND_H
   #define AURORABACKGROUND_H

   #include <QWidget>
   #include <QPainter>
   #include <QTimer>

   class AuroraBackground : public QWidget {
       Q_OBJECT

   public:
       explicit AuroraBackground(QWidget *parent = nullptr);
       void paintEvent(QPaintEvent *event) override;

   private:
       void drawAurora(QPainter &painter);
   };

   #endif // AURORABACKGROUND_H
   ```

   - Now, implement the `AuroraBackground` class in `aurorabackground.cpp`:

   ```cpp
   #include "aurorabackground.h"

   AuroraBackground::AuroraBackground(QWidget *parent) : QWidget(parent) {
       setAttribute(Qt::WA_OpaquePaintEvent);
       setAttribute(Qt::WA_NoSystemBackground);
   }

   void AuroraBackground::paintEvent(QPaintEvent *event) {
       QPainter painter(this);
       drawAurora(painter);
   }

   void AuroraBackground::drawAurora(QPainter &painter) {
       // Set the background color
       painter.setBrush(QColor(10, 10, 30)); // Dark background
       painter.drawRect(rect());

       // Draw aurora-like effect
       QLinearGradient gradient(0, 0, 0, height());
       gradient.setColorAt(0.0, QColor(0, 50, 100, 150)); // Dark bluish
       gradient.setColorAt(0.5, QColor(0, 255, 255, 100)); // Greenish
       gradient.setColorAt(1.0, QColor(0, 50, 100, 150)); // Dark bluish

       painter.setBrush(gradient);
       painter.drawRect(rect());
   }
   ```

### Step 4: Modify MainWindow to Use AuroraBackground

1. Open `mainwindow.cpp` and include the `AuroraBackground` header:

   ```cpp
   #include "aurorabackground.h"
   ```

2. In the `MainWindow` constructor, replace the default central widget with an instance of `AuroraBackground`:

   ```cpp
   MainWindow::MainWindow(QWidget *parent)
       : QMainWindow(parent)
   {
       AuroraBackground *background = new AuroraBackground(this);
       setCentralWidget(background);
   }
   ```

### Step 5: Update the UI

1. Open `mainwindow.ui` in the designer and remove any existing widgets if necessary, as the `AuroraBackground` will cover the entire window.

### Step 6: Build and Run the Project

1. Save all changes.
2. Build the project by clicking on the **Build** button.
3. Run the project to see the beautiful dark bluish/greenish aurora-like background.

### Conclusion

You have successfully created a new Qt project for the CityGame with a beautiful aurora-like background while keeping the original `main.cpp` file unchanged. You can further customize the aurora effect by modifying the colors and gradients in the `drawAurora` method.