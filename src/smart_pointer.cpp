#include<iostream>
#include<string>
#include<memory>
// 智能指针是原始指针的包装
//unique pointer是最简单的pointer，它是scope pointer，当超出当前的scope时，就会自动销毁，并调用delete
// 智能指针都在memory头文件中
//unique_ptr是不能拷贝的，因为当两个指针指向堆中同一个对象时，第一个指针释放完后，堆中数据已经被销毁。第二个指针释放的时候，就会导致memory leak
//unique_ptr 的拷贝构造函数和赋值函数都被设置为delete
// unique_ptr(const unique_ptr& ) = delete;
// unique_ptr& operator=(const unique_ptr&) = delete;
// shared_ptr 使用引用计数，允许我们进行拷贝和赋值
// weak_ptr 和shared_ptr一样允许拷贝和赋值，但是不会增加shared_ptr的引用计数
namespace Smart_ptr {
	class Entity {
	public:
		Entity() {

			std::cout << "Created Entity" << std::endl;

		}
		~Entity() {

			std::cout << "Destroyed Entity" << std::endl;
		}
		void Print() {
			std::cout << "Print Entity" << std::endl;
		}
	};
	int main_smart_ptr() {
		{
			//std::unique_ptr<Entity> entity(new Entity());
			std::unique_ptr<Entity> entity = std::make_unique<Entity>();  // 这是更安全的做法，可以处理Exception(异常)
			//std::unique_ptr e0 = entity;  // 不能拷贝 unique_ptr(const unique_ptr&) = delete;
											//         unique_ptr& operator=(const unique_ptr&) = delete;
			entity->Print();

			// shared_ptr 使用的是reference counting(引用计数)
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			sharedEntity->Print();
			std::shared_ptr<Entity> sharedEntity1 = sharedEntity;


		}
		{
			std::shared_ptr<Entity> e0;
			{
				std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
				e0 = sharedEntity;

			}
		}
		std::cin.get();
		return 0;
	}
}